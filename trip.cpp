#include "trip.h"





Trip::Trip(City origin, City dest, int startHour)
{
    originCity = origin;
    destinationCity = dest;
    startHourAtOrigin = startHour;
}

int Trip::distanceTravelledKM()
{
    return haversine(originCity.lattitude, originCity.longitude, destinationCity.lattitude, destinationCity.longitude);
}


double Trip::travelTimeHours()
{
    double travelTime = distanceTravelledKM() / FLIGHTSPEED_KPH;
    return  travelTime;
}

std::string Trip::sleepSugestion()
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

std::string  Trip::debugString()
{
   std::string s;

   s =  "\n\n Trip Debug";
    s = s +  "\n distance km: " + std::to_string( distanceTravelledKM());
    s = s + "\n" + "travel time hours: " +  std::to_string( travelTimeHours());
    s = s +  "\n" + "sleep reccomendation: " +    sleepSugestion() ;
    s = s +  "\n" + "start hour in local time: " +  std::to_string( startHourAtOrigin);
    s = s +  "\n" + "arival hour at destination " +  std::to_string( arrivalHourDestination());
    return s;

}

int Trip::arrivalHourDestination() //returns the hour at arrival in local time
{
    int r = 0;
    r = startHourAtOrigin + travelTimeHours() + destinationCity.timeZoneGMTOffset - originCity.timeZoneGMTOffset;
    if (r > 24)
    {
        r = r - 24;
    }
    return r;
}


double Trip::haversine(double lat1, double lon1, double lat2, double lon2)
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



