#ifndef CITIES_H
#define CITIES_H

#include <vector>
#include <string>
#include <ctime>
#include <cmath>
#include <algorithm>
#include "city.h"

class Cities
{
public:
    Cities();

public:
    std::vector<City> allCities;

    std::string debugString();
    std::vector<std::string> getDistinctCountries();

    std::vector<City> getCitiesForCountry(std::string p_countryName);

    City getCityByID(int p_cityId);
    City getCityByName(std::string p_cityName);



};

#endif // CITIES_H
