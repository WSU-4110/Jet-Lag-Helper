#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Cities.h"
#include "City.h"
#include "Trip.h"
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList CompletionList;
    QStringList CompletionList2;

    QFile file ("C:\\Users\\15868\\Documents\\JLH\\cities.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", file.errorString());
    }

    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        CompletionList << line;
        CompletionList2 << line;
    }

    StringCompleter = new QCompleter(CompletionList, this);
    StringCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit->setCompleter(StringCompleter);

    StringCompleter2 = new QCompleter(CompletionList2, this);
    StringCompleter2->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_2->setCompleter(StringCompleter2);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString departCity = ui->lineEdit->text();
    QString arrivalCity = ui->lineEdit_2->text();
    QString departTime = ui->comboBox->currentText();
    bool ok;
    int dt = departTime.toInt(&ok);
    Cities c;
    City c1 = c.getCityByName(departCity.toStdString());
    City c2 = c.getCityByName(arrivalCity.toStdString());
    Trip t(c1, c2, dt);
    std::string print = t.debugPrint();
    ui->label_4->setText(QString::fromStdString(print));
}

