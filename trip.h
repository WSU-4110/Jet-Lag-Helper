#ifndef TRIP_H
#define TRIP_H

#include "city.h"
#include <cmath>

class Trip

{
    public:

        int   startHourAtOrigin;
        City originCity;
        City destinationCity;

        // constructor
        Trip(City origin, City dest, int startHour);

        int distanceTravelledKM();

        double travelTimeHours();

        std::string sleepSugestion();
        
        std::string caffeineSugestion();

        std::string hydrationSuggestion();

        std::string additionalTips();

        std::string debugString();

        int arrivalHourDestination();

        std::string mapURL();

private:
    static constexpr double FLIGHTSPEED_KPH = 800.00;


    double haversine(double lat1, double lon1, double lat2, double lon2);


};


#endif // TRIP_H
