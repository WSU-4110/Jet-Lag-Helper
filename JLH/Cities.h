#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <vector>
#include "City.h"

class Cities
{
public:
    std::vector<City> allCities;

    // Constructor fill with cities
    Cities()
    {
        // prefills collection with all cities needed for
        // application.  may want to switch to data file.
        City c;

        c.setAllParameters(1796236, "Shanghai", "China", 31.22222, 121.45806, 8); allCities.push_back(c);
        c.setAllParameters(745044, "Istanbul", "Turkey", 41.01384, 28.94966, 3); allCities.push_back(c);
        c.setAllParameters(3435910, "Buenos Aires", "Argentina", -34.61315, -58.37723, -3); allCities.push_back(c);
        c.setAllParameters(3530597, "Mexico City", "Mexico", 19.42847, -99.12766, -6); allCities.push_back(c);
        c.setAllParameters(1816670, "Beijing", "China", 39.9075, 116.39723, 8); allCities.push_back(c);
        c.setAllParameters(524901, "Moscow", "Russia", 55.75222, 37.61556, 3); allCities.push_back(c);
        c.setAllParameters(1835848, "Seoul", "South Korea", 37.566, 126.9784, 9); allCities.push_back(c);
        c.setAllParameters(3448439, "Sao Paulo", "Brazil", -23.5475, -46.63611, -3); allCities.push_back(c);
        c.setAllParameters(1850147, "Tokyo", "Japan", 35.6895, 139.69171, 9); allCities.push_back(c);
        c.setAllParameters(5128581, "New York City", "United States", 40.71427, -74.00597, -5); allCities.push_back(c);
        c.setAllParameters(1668341, "Taipei", "Taiwan", 25.04776, 121.53185, 8); allCities.push_back(c);
        c.setAllParameters(3936456, "Lima", "Peru", -12.04318, -77.02824, -5); allCities.push_back(c);
        c.setAllParameters(360630, "Cairo", "Egypt", 30.06263, 31.24967, 2); allCities.push_back(c);
        c.setAllParameters(2643743, "London", "United Kingdom", 51.50853, -0.12574, 0); allCities.push_back(c);
        c.setAllParameters(1819729, "Hong Kong", "Hong Kong", 22.27832, 114.17469, 8); allCities.push_back(c);
        c.setAllParameters(3451190, "Rio de Janeiro", "Brazil", -22.90642, -43.18223, -3); allCities.push_back(c);
        c.setAllParameters(1609350, "Bangkok", "Thailand", 13.75398, 100.50144, 7); allCities.push_back(c);
        c.setAllParameters(3871336, "Santiago", "Chile", -33.45694, -70.64827, -3); allCities.push_back(c);
        c.setAllParameters(2147714, "Sydney", "Australia", -33.86785, 151.20732, 11); allCities.push_back(c);
        c.setAllParameters(108410, "Riyadh", "Saudi Arabia", 24.68773, 46.72185, 3); allCities.push_back(c);
        c.setAllParameters(5368361, "Los Angeles", "United States", 34.05223, -118.24368, -8); allCities.push_back(c);
        c.setAllParameters(3369157, "Cape Town", "South Africa", -33.92584, 18.42322, 2); allCities.push_back(c);
        c.setAllParameters(2950159, "Berlin", "Germany", 52.52437, 13.41053, 1); allCities.push_back(c);
        c.setAllParameters(3117735, "Madrid", "Spain", 40.4165, -3.70256, 1); allCities.push_back(c);
        c.setAllParameters(1871859, "Pyongyang", "North Korea", 39.03385, 125.75432, 9); allCities.push_back(c);
        c.setAllParameters(292223, "Dubai", "United Arab Emirates", 25.07725, 55.30927, 4); allCities.push_back(c);
        c.setAllParameters(4887398, "Chicago", "United States", 41.85003, -87.65005, -6); allCities.push_back(c);
        c.setAllParameters(6167865, "Toronto", "Canada", 43.70011, -79.4163, -5); allCities.push_back(c);
        c.setAllParameters(3169070, "Rome", "Italy", 41.89193, 12.51133, 1); allCities.push_back(c);
        c.setAllParameters(4699066, "Houston", "United States", 29.76328, -95.36327, -6); allCities.push_back(c);
        c.setAllParameters(2174003, "Brisbane", "Australia", -27.46794, 153.02809, 10); allCities.push_back(c);
        c.setAllParameters(2988507, "Paris", "France", 48.85341, 2.3488, 1); allCities.push_back(c);
        c.setAllParameters(993800, "Johannesburg", "South Africa", -26.20227, 28.04363, 2); allCities.push_back(c);
        c.setAllParameters(2063523, "Perth", "Australia", -31.95224, 115.8614, 8); allCities.push_back(c);
        c.setAllParameters(5308655, "Phoenix", "United States", 33.44838, -112.07404, -7); allCities.push_back(c);
        c.setAllParameters(5391811, "San Diego", "United States", 32.71571, -117.16472, -8); allCities.push_back(c);
        c.setAllParameters(4684888, "Dallas", "United States", 32.78306, -96.80667, -6); allCities.push_back(c);
        c.setAllParameters(5392171, "San Jose", "United States", 37.33939, -121.89496, -8); allCities.push_back(c);
        c.setAllParameters(2317765, "Zaria", "Nigeria", 11.11128, 7.7227, 1); allCities.push_back(c);
        c.setAllParameters(5419384, "Denver", "United States", 39.73915, -104.9847, -7); allCities.push_back(c);
        c.setAllParameters(5520993, "El Paso", "United States", 31.75872, -106.48693, -7); allCities.push_back(c);
        c.setAllParameters(4990729, "Detroit", "United States", 42.33143, -83.04575, -5); allCities.push_back(c);





        /*
        c.cityId = 1;
        c.cityName = "Detroit";
        c.countryName = "USA";
        allCities.push_back(c);

        c.cityId = 2;
        c.cityName = "Chicago";
        c.countryName = "USA";
        allCities.push_back(c);

        c.cityId = 3;
        c.cityName = "New York";
        c.countryName = "USA";
        allCities.push_back(c);

        c.cityId = 4;
        c.cityName = "Sydney";
        c.countryName = "Australia";
        allCities.push_back(c);

        c.cityId = 5;
        c.cityName = "Paris";
        c.countryName = "France";
        allCities.push_back(c);

        c.cityId = 6;
        c.cityName = "Lyon";
        c.countryName = "France";
        allCities.push_back(c);


        c.setAllParameters(7, "Denver", "USA", 0, 0, -7); allCities.push_back(c);

        c.setAllParameters(8, "Cairo", "Egypt", 80, 10, 4);
        allCities.push_back(c);
        */

        //allCities.push_back(new City(7, "London", "England"));

        //City c(8, "Toronto", "Canada");
        //allCities.push_back(c);


    }

    void debugPrint()
    {

        std::cout << "\n\nShow All Cities In Collection.\n";
        std::cout << "City Count: " << allCities.size();

        auto iter = allCities.begin();

        for (; iter != allCities.end(); iter++)
        {
            (*iter).debugPrint();
        }
        std::cout << "\n";
    }


    std::vector<std::string> getDistinctCountries()
    {
        std::vector<std::string> r;
        auto iter = allCities.begin();

        for (; iter != allCities.end(); iter++)
        {
            std::string c;

            c = (*iter).countryName;
            if (std::find(r.begin(), r.end(), c) == r.end())
            {
                r.push_back(c);
            }
        }
        return r;
    };


    std::vector<City> getCitiesForCountry(std::string p_countryName)
    {
        std::vector<City> r;
        auto iter = allCities.begin();

        for (; iter != allCities.end(); iter++)
        {
            std::string c;
            c = (*iter).countryName;

            // only copy country match cities to output vector
            if (c == p_countryName)
            {
                r.push_back(*iter);
            }
        }
        return r;
    }

    City getCityByID(int p_cityId)
    {
        City r;

        for (unsigned int i = 0; i < allCities.size(); i++)
        {
            if (allCities[i].cityId == p_cityId)
            {
                return allCities[i];
            }
        }
        return r;

    }

    City getCityByName(std::string p_cityName)
    {
        City r;

        for (unsigned int i = 0; i < allCities.size(); i++)
        {
            if (allCities[i].cityName == p_cityName)
            {
                return allCities[i];
            }
        }
        return r;

    }

protected:



};
