#include "city.h"

// Default Constructor
City::City()
 {
    cityId = -1;
    cityName = "nowhere";
    countryName = "lalaland";
    lattitude = 0;
    longitude = 0;
    timeZoneGMTOffset = 0;
    // donothing
}

// Extended Constructor
City::City(int p_cityId, std::string p_cityName, std::string p_countryName, double p_lattitude, double p_longitude, int p_timeZoneGMTOffset )
{
    cityId = p_cityId;
    cityName = p_cityName;
    countryName = p_countryName;
    lattitude = p_lattitude;
    longitude = p_longitude;
    timeZoneGMTOffset = p_timeZoneGMTOffset;

}

void  City::setAllParameters(int p_cityId, std::string p_cityName, std::string p_countryName, double p_lattitude, double p_longitude, int p_timeZoneGMTOffset)
{
    cityId = p_cityId;
    cityName = p_cityName;
    countryName = p_countryName;
    lattitude = p_lattitude;
    longitude = p_longitude;
    timeZoneGMTOffset = p_timeZoneGMTOffset;

}

std::string City::debugString()
{
    std::string s;
    s = "\n" +  cityName + "  " + countryName;
    return s;

}


