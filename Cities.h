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
        c.setAllParameters(1273294, "Delhi", "India", 28.65195, 77.23149, 5.5); allCities.push_back(c);
        c.setAllParameters(1275339, "Mumbai", "India", 19.07283, 72.88261, 5.5); allCities.push_back(c);
        c.setAllParameters(1174872, "Karachi", "Pakistan", 24.8608, 67.0104, 5); allCities.push_back(c);
        c.setAllParameters(1792947, "Tianjin", "China", 39.14222, 117.1767, 8); allCities.push_back(c);
        c.setAllParameters(1809858, "Guangzhou", "China", 23.11667, 113.25, 8); allCities.push_back(c);
        c.setAllParameters(1795565, "Shenzhen", "China", 22.54554, 114.0683, 8); allCities.push_back(c);
        c.setAllParameters(1185241, "Dhaka", "Bangladesh", 23.7104, 90.40744, 6); allCities.push_back(c);
        c.setAllParameters(1791247, "Wuhan", "China", 30.58333, 114.2667, 8); allCities.push_back(c);
        c.setAllParameters(2332459, "Lagos", "Nigeria", 6.45407, 3.39467, 1); allCities.push_back(c);
        c.setAllParameters(1642911, "Jakarta", "Indonesia", -6.21462, 106.8451, 7); allCities.push_back(c);
        c.setAllParameters(2314302, "Kinshasa", "Democratic Republic of Congo", -4.32758, 15.31357, -5); allCities.push_back(c);
        c.setAllParameters(3688689, "Bogota", "Colombia", 4.60971, -74.0818, -5); allCities.push_back(c);
        c.setAllParameters(1814906, "Chongqing", "China", 29.56026, 106.5577, 8); allCities.push_back(c);
        c.setAllParameters(1815286, "Chengdu", "China", 30.66667, 104.06667, 8); allCities.push_back(c);
        c.setAllParameters(1812545, "Dongguan", "China", 23.01797, 113.74866, 8); allCities.push_back(c);
        c.setAllParameters(98182, "Baghdad", "Iraq", 33.34058, 44.40088, 3); allCities.push_back(c);
        c.setAllParameters(1811103, "Foshan", "China", 23.02677, 113.1315, 8); allCities.push_back(c);
        c.setAllParameters(1799962, "Nanjing", "China", 32.06167, 118.7778, 8); allCities.push_back(c);
        c.setAllParameters(112931, "Tehran", "Iran", 35.69439, 51.42151, 3.5); allCities.push_back(c);
        c.setAllParameters(1790630, "Xi'an", "China", 34.25833, 108.9286, 8); allCities.push_back(c);
        c.setAllParameters(1279233, "Ahmedabad", "India", 23.02579, 72.58727, 5.5); allCities.push_back(c);
        c.setAllParameters(1172451, "Lahore", "Pakistan", 31.558, 74.35071, 5); allCities.push_back(c);
        c.setAllParameters(2034937, "Shenyang", "China", 41.79222, 123.4328, 8); allCities.push_back(c);
        c.setAllParameters(1808926, "Hangzhou", "China", 30.29365, 120.1614, 8); allCities.push_back(c);
        c.setAllParameters(2037013, "Harbin", "China", 45.75, 126.65, 8); allCities.push_back(c);
        c.setAllParameters(1886760, "Suzhou", "China", 31.30408, 120.5954, 8); allCities.push_back(c);
        c.setAllParameters(1277333, "Bengaluru", "India", 12.97194, 77.59369, 5.5); allCities.push_back(c);
        c.setAllParameters(498817, "Saint Petersburg", "Russia", 59.93863, 30.31413, 3); allCities.push_back(c);
        c.setAllParameters(1275004, "Kolkota", "India", 22.56263, 88.36304, 5.5); allCities.push_back(c);
        c.setAllParameters(1255364, "Surat", "India", 37.86944, 112.5603, 5.5); allCities.push_back(c);
        c.setAllParameters(1793511, "Taiyuan", "China", 37.96944, 112.5603, 8); allCities.push_back(c);
        c.setAllParameters(1298824, "Yangon", "China", 16.80528, , 8); allCities.push_back(c);
        c.setAllParameters(1264527, "Chennai", "India", 13.08784, 80.27847, 5.5); allCities.push_back(c);
        c.setAllParameters(2158177, "Melbourne", "Australia", -37.814, 144.9633, 11); allCities.push_back(c);
        c.setAllParameters(1795270, "Shijazhuang", "China", 38.04139, 114.4786, 8); allCities.push_back(c);
        c.setAllParameters(1205733, "Chattogram", "Bangladesh", 22.3384, 91.83168, 6); allCities.push_back(c);
        c.setAllParameters(361058, "Alexandria", "Egypt", 31.20176, 29.91582, 2); allCities.push_back(c);
        c.setAllParameters(1797929, "Qingdao", "China", 36.06488, 120.3804, 8); allCities.push_back(c); 
        c.setAllParameters(1838524, "Busan", "South Korea", 35.10168, 129.03, 9); allCities.push_back(c);
        c.setAllParameters(2293538, "Abidjan", "Ivory Coast", 5.35444, -4.00167, 0); allCities.push_back(c);
        c.setAllParameters(2335204, "Kano", "Nigeria", 12.00012, 8.51672, 1); allCities.push_back(c);
        c.setAllParameters(1269843, "Hyderabad", "India", 17.38405, 78.45636, 5.5); allCities.push_back(c);
        c.setAllParameters(1798425, "Puyang", "China", 29.45679, 119.8887, 8); allCities.push_back(c);
        c.setAllParameters(1848354, "Yokohama", "Japan", 35.10168, 139.65, 9); allCities.push_back(c);
        c.setAllParameters(2339354, "Ibadan", "Nigeria", 7.37756, 3.90591, 1); allCities.push_back(c);
        c.setAllParameters(1880252, "Singapore", "Singapore", 1.28967, 103.8501, 8); allCities.push_back(c);
        c.setAllParameters(1790645, "Xiamen", "China", 24.47979, 118.0819, 8); allCities.push_back(c);
        c.setAllParameters(323786, "Ankara", "Turkey", 39.91987, 32.85427, 3); allCities.push_back(c);
        c.setAllParameters(1566083, "Ho Chi Minh City", "Vietnam", 10.82302, 106.6297, 7); allCities.push_back(c);
        c.setAllParameters(2553604, "Casablanca", "Morocco", 33.58831, -7.61138, 1); allCities.push_back(c);
        c.setAllParameters(1007311, "Durban", "South Africa", -29.8579, 31.0292, 2); allCities.push_back(c);
        c.setAllParameters(1138958, "Kabul", "Afghanistan", 34.52813, 69.17233, 4.5); allCities.push_back(c);
        c.setAllParameters(3646738, "Caracas", "Venezuela", 10.48801, -66.8792, -4); allCities.push_back(c);
        c.setAllParameters(1259229, "Pune", "India", 18.51957, 73.85535, 5.5); allCities.push_back(c);
        c.setAllParameters(105343, "Jeddah", "Saudi Arabia", 21.49012, 39.18624, 3); allCities.push_back(c);
        c.setAllParameters(1267995, "Kanpur", "India", 26.46523, 80.34975, 5.5); allCities.push_back(c);
        c.setAllParameters(703448, "Kyiv", "Ukraine", 23.02677, 113.1315, 2); allCities.push_back(c);
        c.setAllParameters(2240449, "Luanda", "Angola", -8.83682, 13.23432, 1); allCities.push_back(c);
        c.setAllParameters(1692192, "Quezon City", "Phillipines", 14.6488, 121.0509, 8); allCities.push_back(c);
        c.setAllParameters(344979, "Addis Ababa", "Ethiopia", 9.02497, 38.74689, 3); allCities.push_back(c);
        c.setAllParameters(184745, "Nairobi", "Kenya", -1.28333, 36.81667, 3); allCities.push_back(c);
        c.setAllParameters(3450554, "Salvador", "Brazil", -12.9711, -38.5108, -3); allCities.push_back(c);
        c.setAllParameters(1269515, "Jaipur", "India", 26.91962, 75.78781, 5.5); allCities.push_back(c);
        c.setAllParameters(160263, "Dar es Salaam", "Tanzania", -6.82349, 39.26951, 3); allCities.push_back(c);
        c.setAllParameters(1853909, "Osaka", "Japan", 34.69374, 135.5022, 9); allCities.push_back(c);
        c.setAllParameters(53654, "Mogadishu", "Somalia", 2.03711, 45.34375, 3); allCities.push_back(c);
        c.setAllParameters(1179400, "Faisalabad", "Pakistan", 31.41554, 73.08696, 5); allCities.push_back(c);
        c.setAllParameters(311046, "Izmir", "Iraq", 38.41273, 27.13838, 3); allCities.push_back(c);
       





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
