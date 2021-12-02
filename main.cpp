#include "jetlag.h"
#include <QNetworkAccessManager>
#include <QApplication>


int main2(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JetLag w;
    w.show();
    return a.exec();
}

