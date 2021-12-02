#include "testtrip.h"



    void TestTrip::init()
    {

    }

    void TestTrip::testA()
    {
        QVERIFY(5 == 5);
    }
    void TestTrip::NYtoChicagoDistance()
    {
        Cities c;
        City   NYC = c.getCityByName("New York City");
        City   Chicago = c.getCityByName("Chicago");
        Trip t(NYC, Chicago, 5);
        QVERIFY( t.distanceTravelledKM() == 1145);
    }

    void TestTrip::NYtoChicagoTravelTimeHours()
    {
        Cities c;
        City   NYC = c.getCityByName("New York City");
        City   Chicago = c.getCityByName("Chicago");
        Trip t(NYC, Chicago, 5);
        QVERIFY( t.travelTimeHours() == 1.43125);
    }

    void TestTrip::NYtoLASleepRec()
    {
        Cities c;
        City   NYC = c.getCityByName("New York City");
        City   LA = c.getCityByName("Los Angeles");
        Trip t(NYC, LA, 5);
        QVERIFY( t.sleepSugestion() == "Sleep upon landing.");
    }

    void TestTrip::LAtoNYSleepRec()
    {
        Cities c;
        City   NYC = c.getCityByName("New York City");
        City   LA = c.getCityByName("Los Angeles");
        Trip t(LA, NYC, 5);
        QVERIFY( t.sleepSugestion() == "Sleep on the flight.");
    }

    void TestTrip::ChicagotoNYSleepRec()
    {
        Cities c;
        City   NYC = c.getCityByName("New York City");
        City   Chicago = c.getCityByName("Chicago");
        Trip t(Chicago, NYC, 5);
        QVERIFY( t.sleepSugestion() == "Stay awake on the flight.");
    }

    void TestTrip::NYtoLAArrivalTimeLocal()
    {
        Cities c;
        City   NYC = c.getCityByName("New York City");
        City   LA = c.getCityByName("Los Angeles");
        Trip t(NYC, LA, 5);
        QVERIFY( t.arrivalHourDestination() == 6);
    }

    void TestTrip::DetroitToLondonMapURL()
    {
        Cities c;
        City   Detroit = c.getCityByName("Detroit");
        City   London = c.getCityByName("London");
        Trip t(Detroit, London, 5);
        QVERIFY( t.mapURL() == "https://dev.virtualearth.net/REST/v1/Imagery/Map/Road/46.919980,-41.585745/1?mapSize=500,500&pp=42.331430,-83.045750;52;Detroit&pp=51.508530,-0.125740;52;London&key=AqPQw6yAWUMKzyCKK9XAm_Yg4A1P0nbb5khDuzVlnI8pKFxY7TbD3sP2iowMW6vc");
    }




    // test todo




    // - test url Detroit to London, should be: https://dev.virtualearth.net/REST/v1/Imagery/Map/Road/46.919980,-41.585745/1?mapSize=500,500&pp=42.331430,-83.045750;52;Detroit&pp=51.508530,-0.125740;52;London&key=AqPQw6yAWUMKzyCKK9XAm_Yg4A1P0nbb5khDuzVlnI8pKFxY7TbD3sP2iowMW6vc

    QTEST_MAIN(TestTrip)
