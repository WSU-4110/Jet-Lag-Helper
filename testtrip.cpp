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


    // test todo
    // - test NY to LA sleep recommend (should be sleep upon landing)
    // - test LA to NY sleep recommned (should be sleep on flight)
    // -  test Chicago to NYC sleep recommend (should be stay awake)
    // - test NY to LA arrival time local starting at 5 (should be 6)
    // - test url Detroit to London, should be: https://dev.virtualearth.net/REST/v1/Imagery/Map/Road/46.919980,-41.585745/1?mapSize=500,500&pp=42.331430,-83.045750;52;Detroit&pp=51.508530,-0.125740;52;London&key=AqPQw6yAWUMKzyCKK9XAm_Yg4A1P0nbb5khDuzVlnI8pKFxY7TbD3sP2iowMW6vc

    QTEST_MAIN(TestTrip)
