#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <vector>

class City
{
public:
    int cityId;
    std::string cityName;
    std::string countryName;
    double lattitude;
    double longitude;
    int timeZoneGMTOffset;


    City()
    {
        cityId = -1;
        cityName = "nowhere";
        countryName = "lalaland";
        lattitude = 0;
        longitude = 0;
        timeZoneGMTOffset = 0;
        // donothing
    }


    City(int p_cityId, std::string p_cityName, std::string p_countryName, double p_lattitude, double p_longitude, int p_timeZoneGMTOffset)
    {
        cityId = p_cityId;
        cityName = p_cityName;
        countryName = p_countryName;
        lattitude = p_lattitude;
        longitude = p_longitude;
        timeZoneGMTOffset = p_timeZoneGMTOffset;

    }

    void  setAllParameters(int p_cityId, std::string p_cityName, std::string p_countryName, double p_lattitude, double p_longitude, int p_timeZoneGMTOffset)
    {
        cityId = p_cityId;
        cityName = p_cityName;
        countryName = p_countryName;
        lattitude = p_lattitude;
        longitude = p_longitude;
        timeZoneGMTOffset = p_timeZoneGMTOffset;

    }

    void debugPrint()
    {
        std::cout << "\n" << cityId << " " << cityName << " " << timeZoneGMTOffset;

    }

};
