#include "jetlag.h"
#include "ui_jetlag.h"
#include "city.h"
#include "cities.h"
#include "trip.h"
#include <QNetworkAccessManager>

#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <ctime>

#include <vector>




JetLag::JetLag(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JetLag)
{
    ui->setupUi(this);
    Cities c;

    QStringList l;
    for (unsigned long i = 0; i < c.allCities.size(); i++)
    {
        QString cityName;
        cityName = QString::fromStdString(c.allCities[i].cityName);
        l.append( cityName);

    }

    QCompleter *comp = new QCompleter(l, this);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    comp->setCompletionMode(QCompleter::UnfilteredPopupCompletion);

    ui->txtOriginCityName->setCompleter(comp);
    ui->txtDestinationCityName->setCompleter(comp);



}

JetLag::~JetLag()
{
    delete ui;
}

void JetLag::downloadDone(QNetworkReply *reply)
{
   //FIX TODO
    QByteArray jpegData = reply->readAll();
    QPixmap pixmap;
    pixmap.loadFromData(jpegData);
    ui->lblMap->setPixmap(pixmap);
}

void JetLag::on_cmdGetPlan_clicked()
{

    City o;
    City d;
    Cities c;
    std::string s;
    QString s2;
   // int leaveTime = 0;
    s2 = ui->txtOriginCityName->text();
    s = s2.toStdString();
    o = c.getCityByName(s);

    s2 = ui->txtDestinationCityName->text();
    s = s2.toStdString();
    d = c.getCityByName(s);




    Trip t(o,d,ui->spinBox->value());

    ui->txtFlightDistance->setText(QString::number(t.distanceTravelledKM()));
    ui->txtArrivalHour->setText(QString::number(t.arrivalHourDestination()));
    ui->txtTravelTime->setText(QString::number(t.travelTimeHours()));

    //s = ui->cboOriginName->currentText();
   ui->txtSleepSuggestion->setText(QString::fromStdString(t.sleepSugestion()));
   ui->txtMapURL->setText(QString::fromStdString(t.mapURL()));

   QUrl url (QString::fromStdString(t.mapURL()));
   this->mManager = new QNetworkAccessManager(this);

   connect(mManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(downloadDone(QNetworkReply*)));

   QNetworkRequest r(url);
   mManager->get(r);



}


void JetLag::on_JetLag_tabifiedDockWidgetActivated(QDockWidget *dockWidget)
{

}




