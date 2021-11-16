#include "jetlag.h"
#include "ui_jetlag.h"
#include "city.h"
#include "cities.h"
#include "trip.h"


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
    std::vector<std::string> u;
    u = c.getDistinctCountries();
    for (int j = 0; j < u.size(); j++)
    {
        QString countryName;
        countryName = QString::fromStdString(u[j]);
        ui->cboOriginCountry->addItem(countryName);
        ui->cboDestinationCountry->addItem(countryName);
    }

}

JetLag::~JetLag()
{
    delete ui;
}


void JetLag::on_cmdGetPlan_clicked()
{

    City o;
    City d;
    Cities c;
    std::string s;
    QString s2;
    int leaveTime = 0;
    s2 = ui->cboOriginName->currentText();
    s = s2.toStdString();
    o = c.getCityByName(s);

    s2 = ui->cboDestinationName->currentText();
    s = s2.toStdString();
    d = c.getCityByName(s);




    Trip t(o,d,ui->spinBox->value());

    ui->txtFlightDistance->setText(QString::number(t.distanceTravelledKM()));
    ui->txtArrivalHour->setText(QString::number(t.arrivalHourDestination()));
    ui->txtTravelTime->setText(QString::number(t.travelTimeHours()));

    //s = ui->cboOriginName->currentText();
   ui->txtSleepSuggestion->setText(QString::fromStdString(t.sleepSugestion()));
}


void JetLag::on_JetLag_tabifiedDockWidgetActivated(QDockWidget *dockWidget)
{

}


void JetLag::on_cboOriginCountry_currentTextChanged(const QString &arg1)
{
    // clear out origin cities menu and replace with selected country

    Cities c;
    std::vector<City> t;
    t = c.getCitiesForCountry(arg1.toStdString());
    ui->cboOriginName->clear();
    for (int var = 0; var < t.size(); ++var)
    {
        QString s;

         s = QString::fromStdString(t[var].cityName);
         ui->cboOriginName->addItem(s);

    }

}


void JetLag::on_cboDestinationCountry_currentTextChanged(const QString &arg1)
{
    // clear out origin cities menu and replace with selected country

    Cities c;
    std::vector<City> t;
    t = c.getCitiesForCountry(arg1.toStdString());
    ui->cboDestinationName->clear();
    for (int var = 0; var < t.size(); ++var)
    {
        QString s;

         s = QString::fromStdString(t[var].cityName);
         ui->cboDestinationName->addItem(s);

    }
}

