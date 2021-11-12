#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <sstream>
#include "City.h"
#define M_PI 3.14159265358979323846

class Trip
{


public:

    int   startHourAtOrigin;

    City originCity;
    City destinationCity;






    Trip(City origin, City dest, int startHour)
    {
        originCity = origin;
        destinationCity = dest;
        startHourAtOrigin = startHour;
    }

    int distanceTravelledKM()
    {
        return haversine(originCity.lattitude, originCity.longitude, destinationCity.lattitude, destinationCity.longitude);
    }


    double travelTimeHours()
    {
        double travelTime = distanceTravelledKM() / FLIGHTSPEED_KPH;

        return  travelTime;

    }

    std::string sleepSugestion()
    {
        std::string result = "NULL";
        if (travelTimeHours() < 3)
        {
            result = "Stay awake on the flight.";
        }

        if (travelTimeHours() > 3 && destinationCity.timeZoneGMTOffset > originCity.timeZoneGMTOffset)
        {
            result = "Sleep on the flight.";
        }

        if (travelTimeHours() > 3 && destinationCity.timeZoneGMTOffset < originCity.timeZoneGMTOffset)
        {
            result = "Sleep upon landing.";
        }

        return result;
    }

    std::string debugPrint()
    {

        std::ostringstream os;
                os << "\n" << "From: " << originCity.cityName << ", " << originCity.countryName << "\n"
                   << "To: " << destinationCity.cityName << ", " << destinationCity.countryName << "\n"
                   << "Travel distance (km): " << distanceTravelledKM() << "\n"
                    << "Travel time hours: " << travelTimeHours() << "\n"
                    << "Sleep recommendation: " << sleepSugestion() << "\n"
                    << "Depart Time: " << startHourAtOrigin << "\n"
                    << "Time Zone Change: " << arrivalHourDestination();
                return os.str();


    }

    int arrivalHourDestination() //returns the hour at arrival in local time
    {
        int r = 0;
        r = startHourAtOrigin + travelTimeHours() + destinationCity.timeZoneGMTOffset - originCity.timeZoneGMTOffset;


        if (r > 24)
        {
            r = r - 24;
        }

        return r;
    }









private:
    static constexpr double FLIGHTSPEED_KPH = 900.00;

    double haversine(double lat1, double lon1, double lat2, double lon2)
    {
        // distance between latitudes
        // and longitudes
        double dLat = (lat2 - lat1) * M_PI / 180.0;
        double dLon = (lon2 - lon1) * M_PI / 180.0;

        // convert to radians
        lat1 = (lat1)*M_PI / 180.0;
        lat2 = (lat2)*M_PI / 180.0;

        // apply formula
        double a = pow(sin(dLat / 2), 2) + pow(sin(dLon / 2), 2) * cos(lat1) * cos(lat2);
        double rad = 6371;
        double c = 2 * asin(sqrt(a));
        return rad * c;
    }

};
