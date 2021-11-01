#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Cities.h"
#include "City.h"
#include "Trip.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString departCity = ui->lineEdit->text();
    QString arrivalCity = ui->lineEdit_2->text();
    QString departTime = ui->lineEdit_3->text();
    bool ok;
    int dt = departTime.toInt(&ok);
    Cities c;
    City c1 = c.getCityByName(departCity.toStdString());
    City c2 = c.getCityByName(arrivalCity.toStdString());
    Trip t(c1, c2, dt);
    std::string print = t.debugPrint();
    ui->label_4->setText(QString::fromStdString(print));
}

