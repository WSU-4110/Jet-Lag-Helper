/********************************************************************************
** Form generated from reading UI file 'jetlag.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JETLAG_H
#define UI_JETLAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JetLag
{
public:
    QWidget *centralwidget;
    QComboBox *cboOriginName;
    QComboBox *cboDestinationName;
    QPushButton *cmdGetPlan;
    QLabel *lblOrigin;
    QLabel *lblDestination;
    QSpinBox *spinBox;
    QLabel *lblDepartureHour;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextBrowser *txtFlightDistance;
    QTextBrowser *txtTravelTime;
    QTextBrowser *txtArrivalHour;
    QTextBrowser *txtSleepSuggestion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JetLag)
    {
        if (JetLag->objectName().isEmpty())
            JetLag->setObjectName(QString::fromUtf8("JetLag"));
        JetLag->resize(499, 471);
        centralwidget = new QWidget(JetLag);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        cboOriginName = new QComboBox(centralwidget);
        cboOriginName->setObjectName(QString::fromUtf8("cboOriginName"));
        cboOriginName->setGeometry(QRect(160, 50, 241, 31));
        cboDestinationName = new QComboBox(centralwidget);
        cboDestinationName->setObjectName(QString::fromUtf8("cboDestinationName"));
        cboDestinationName->setGeometry(QRect(160, 90, 241, 31));
        cmdGetPlan = new QPushButton(centralwidget);
        cmdGetPlan->setObjectName(QString::fromUtf8("cmdGetPlan"));
        cmdGetPlan->setGeometry(QRect(160, 170, 201, 28));
        lblOrigin = new QLabel(centralwidget);
        lblOrigin->setObjectName(QString::fromUtf8("lblOrigin"));
        lblOrigin->setGeometry(QRect(20, 60, 101, 21));
        lblDestination = new QLabel(centralwidget);
        lblDestination->setObjectName(QString::fromUtf8("lblDestination"));
        lblDestination->setGeometry(QRect(20, 100, 101, 21));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(160, 130, 91, 31));
        spinBox->setMinimum(0);
        spinBox->setMaximum(23);
        spinBox->setValue(8);
        lblDepartureHour = new QLabel(centralwidget);
        lblDepartureHour->setObjectName(QString::fromUtf8("lblDepartureHour"));
        lblDepartureHour->setGeometry(QRect(20, 130, 101, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 360, 151, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 240, 151, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 280, 151, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 320, 151, 41));
        txtFlightDistance = new QTextBrowser(centralwidget);
        txtFlightDistance->setObjectName(QString::fromUtf8("txtFlightDistance"));
        txtFlightDistance->setGeometry(QRect(160, 250, 211, 31));
        txtTravelTime = new QTextBrowser(centralwidget);
        txtTravelTime->setObjectName(QString::fromUtf8("txtTravelTime"));
        txtTravelTime->setGeometry(QRect(160, 290, 211, 31));
        txtArrivalHour = new QTextBrowser(centralwidget);
        txtArrivalHour->setObjectName(QString::fromUtf8("txtArrivalHour"));
        txtArrivalHour->setGeometry(QRect(160, 330, 211, 31));
        txtSleepSuggestion = new QTextBrowser(centralwidget);
        txtSleepSuggestion->setObjectName(QString::fromUtf8("txtSleepSuggestion"));
        txtSleepSuggestion->setGeometry(QRect(160, 370, 211, 31));
        JetLag->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JetLag);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 499, 26));
        JetLag->setMenuBar(menubar);
        statusbar = new QStatusBar(JetLag);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JetLag->setStatusBar(statusbar);

        retranslateUi(JetLag);

        QMetaObject::connectSlotsByName(JetLag);
    } // setupUi

    void retranslateUi(QMainWindow *JetLag)
    {
        JetLag->setWindowTitle(QCoreApplication::translate("JetLag", "JetLag", nullptr));
        cmdGetPlan->setText(QCoreApplication::translate("JetLag", "Show Sleep Suggestion", nullptr));
        lblOrigin->setText(QCoreApplication::translate("JetLag", "Origin City", nullptr));
        lblDestination->setText(QCoreApplication::translate("JetLag", "Destination City", nullptr));
        lblDepartureHour->setText(QCoreApplication::translate("JetLag", "Hour of Departure", nullptr));
        label->setText(QCoreApplication::translate("JetLag", "Sleep Suggestion", nullptr));
        label_2->setText(QCoreApplication::translate("JetLag", "Flight Distance (KM)", nullptr));
        label_3->setText(QCoreApplication::translate("JetLag", "Travel Time (Hours)", nullptr));
        label_4->setText(QCoreApplication::translate("JetLag", "Arrival Hour:", nullptr));
        txtSleepSuggestion->setHtml(QCoreApplication::translate("JetLag", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">happy</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JetLag: public Ui_JetLag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JETLAG_H
