#ifndef CITY_H
#define CITY_H

#include <string>


class City
{
public:


    int cityId;
    std::string cityName;
    std::string countryName;
    double lattitude;
    double longitude;
    double timeZoneGMTOffset;

    //Default Constructor
    City();

    // Extended Constructor
    City(int p_cityId, std::string p_cityName, std::string p_countryName, double p_lattitude, double p_longitude, double p_timeZoneGMTOffset );

    // Easy method to quickly set all properties
    void   setAllParameters(int p_cityId, std::string p_cityName, std::string p_countryName, double p_lattitude, double p_longitude, double p_timeZoneGMTOffset);

    // String return of key values in city object
    std::string debugString();

};

#endif // CITY_H
