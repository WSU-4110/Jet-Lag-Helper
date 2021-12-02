#ifndef TESTTRIP_H
#define TESTTRIP_H

#include "trip.h"
#include "city.h"
#include "cities.h"
#include <QtTest>

class TestTrip: public QObject
{

    Q_OBJECT

//public:
    //TestTrip();

private slots:
    void init();
    void testA();
    void NYtoChicagoDistance();
    void NYtoChicagoTravelTimeHours();


};

#endif // TESTTRIP_H
