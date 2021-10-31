// JetLagHelperClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
//=========================================================================================================

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


//===========================================================================================
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

    void debugPrint()
    {
        std::cout << "\n\n" << "Trip Debug";
        originCity.debugPrint();
        destinationCity.debugPrint();

        std::cout << "\n" << "distance km: " << distanceTravelledKM();

        std::cout << "\n" << "travel time hours: " << travelTimeHours();

        std::cout << "\n" << "sleep reccomendation: " << sleepSugestion();

        std::cout << "\n" << "start hour in local time: " << startHourAtOrigin;

        std::cout << "\n" << "arival hour at destination " << arrivalHourDestination();
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





int main()
{
    /*
    std::cout << "Hello World!\n";

    // City c1(4990729, "Detroit", "USA", 42.33143, -83.04575, -5 );
     //City c2(4887398, "Chicago", "USA", 41.85003, -87.65005, -6 );

     // test of cities 
    Cities c;
    // c.debugPrint();


    City c1 = c.getCityByName("Detroit");
    City c2 = c.getCityByName("Paris");

    Trip t(c1, c2, 20);

    t.debugPrint();


    // test of distinct countries
    std::vector<std::string> countries = c.getDistinctCountries();
    std::cout << "\n\n" << "test of distinct countries";
    for (int i = 0; i < countries.size(); i++)
    {
        std::cout << "\n" << countries[i];
    }

    // test of get city by name
    City d = c.getCityByName("Paris");
    d.debugPrint();


    //c1.debugPrint();
    */
    Cities c;
    City c1;
    City c2;
    int userChoice = -1;
    int departureTime = -1;
    while (userChoice != 6) {
        std::cout << "Welcome to Jet Lag Helper Alpha" << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "Options:" << std::endl;
        std::cout << "1. Change departing destination" << std::endl;
        std::cout << "2. Change arrival destination" << std::endl;
        std::cout << "3. Change departure time" << std::endl;
        std::cout << "4. List all cities" << std::endl;
        std::cout << "5. Process data" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter choice:";
        std::cin >> userChoice;
        if (userChoice == 1) {
            std::string userDestination;
            std::cout << "Please enter departing destination:";
            std::cin >> userDestination;
            c1 = c.getCityByName(userDestination);
        }
        else if (userChoice == 2) {
            std::string userArrival;
            std::cout << "Please enter arrival destination:";
            std::cin >> userArrival;
            c2 = c.getCityByName(userArrival);
        }
        else if (userChoice == 3) {
            std::cout << "Please enter departure time (24 hours format):";
            std::cin >> departureTime;
            if (departureTime > 24 || departureTime < 0) {
                userChoice = 6; //this is very sloppy i can't really think of anything besides a while loop but we need a better way to do this
            }
        }
        else if (userChoice == 4) {
            c.debugPrint();
        }
        else if (userChoice == 5) {
            std::cout << "Calculating travel information..." << std::endl;
            std::cout << "The following information has been detected:" << std::endl;
            break;
        }
        else if (userChoice == 6) {
            exit;
        }
        else {
            std::cout << "Error: Invalid input, please try again.";
        }
    }
    std::cout << "Trip Information" << std::endl;
    std::cout << "From:     " << c1.cityName << "," << c1.countryName << std::endl;
    std::cout << "To:       " << c2.cityName << "," << c2.countryName << std::endl;
    std::cout << "Depart time:  " << departureTime << std::endl; 
    Trip t1(c1,c2, departureTime);
    std::cout << "Travel distance: " << t1.distanceTravelledKM() << std::endl;
    std::cout << "Time Zone Change: " << t1.arrivalHourDestination() << std::endl;


}








// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
