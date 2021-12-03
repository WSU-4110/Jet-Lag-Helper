#include "testcities.h"

//TestCities::TestCities()

void TestCities::init(){

}


void TestCities::cityID1(){
    Cities c;
    City city = c.getCityByID(1796236);
    QVERIFY(city.debugString() == "Shanghai, China");

}

void TestCities::cityID2(){
    Cities c;
    City city = c.getCityByID(745044);
    QVERIFY(city.debugString() == "Istanbul" "Turkey");

}

void TestCities::cityByName(){

}

QTEST_MAIN(TestCities);
