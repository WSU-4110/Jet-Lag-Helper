#ifndef TESTCITIES_H
#define TESTCITIES_H

#include "city.h"
#include "cities.h"
#include <QtTest/QTest>

class TestCities: public QObject
{
    Q_OBJECT;
//public:
    //TestCities();

private slots:
    void init();
    void cityID1();
    void cityID2();
    void cityByName1();
    void cityByName2();

};

#endif // TESTCITIES_H
