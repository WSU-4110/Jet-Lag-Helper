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
        if (travelTimeHours() > 6)
        {
            result = "Sleep on the second half of the flight.";
        }
        else
        {
            result = "Sleep on the flight.";
        }

    }

    if (travelTimeHours() > 3 && destinationCity.timeZoneGMTOffset < originCity.timeZoneGMTOffset)
    {
        result = "Sleep upon landing.";
    }

    return result;
}

std::string Trip::caffeineSugestion()
{
    std::string result = "NULL";
    if (travelTimeHours() < 3)
    {
        result = "Drink caffeine to stay awake on flight.";
    }

    if (travelTimeHours() > 3 && destinationCity.timeZoneGMTOffset > originCity.timeZoneGMTOffset)
    {
        result = "Avoid caffeine on the flight.";
    }

    if (travelTimeHours() > 3 && destinationCity.timeZoneGMTOffset < originCity.timeZoneGMTOffset)
    {
        result = "Avoid caffeine upon landing.";
    }

    return result;
}

std::string Trip::hydrationSuggestion()
{
    std::string result = "NULL";
    if (travelTimeHours() < 3)
    {
        result = "Stay hydrated during flight";
    }

    if (travelTimeHours() > 3 && destinationCity.timeZoneGMTOffset > originCity.timeZoneGMTOffset)
    {
        result = "Stay hydrated during flight.";
    }

    if (travelTimeHours() > 3 && destinationCity.timeZoneGMTOffset < originCity.timeZoneGMTOffset)
    {
        result = "Stay hydrated during flight.";
    }

    return result;
}

std::string Trip::additionalTips(){
   std::ostringstream result;
   result << "Bring empty bottle to fill up after getting passed from security"
          << "\n" << "Bring a book or tablet"
          << "\n" << "Bring neck pillow and headphones to have a better sleep during flight"
          << "\n" << "Make sure your phone is fully charged";
   return result.str();

}

std::string  Trip::debugString()
{
   std::string s;

   s =  "\n\n Trip Debug";
    s = s +  "\n distance km: " + std::to_string( distanceTravelledKM());
    s = s + "\n" + "travel time hours: " +  std::to_string( travelTimeHours());
    s = s +  "\n" + "sleep recommendation: " +    sleepSugestion() ;
    s = s +  "\n" + "caffeine recommendation: " +    caffeineSugestion() ;
    s = s +  "\n" + "hydration recommendation: " +    hydrationSuggestion() ;
    s = s +  "\n" + "additional tips: " + additionalTips();
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

std::string Trip::mapURL()
{
       std::string pin1;
       std::string pin2;
       std::string url;

       double midLat= (destinationCity.lattitude + originCity.lattitude) / 2;
       double midLong= (destinationCity.longitude + originCity.longitude) / 2;

       std::string centerPoint;

       centerPoint = std::to_string(midLat) + "," + std::to_string(midLong);

        std::string zoom = "1";
        if (distanceTravelledKM() < 1000)
        {
            zoom = "6";
        }
        else if (distanceTravelledKM() < 2000)
        {
            zoom = "4";
        }
        else if (distanceTravelledKM() < 3000)
        {
            zoom = "3";
        }

       url = "https://dev.virtualearth.net/REST/v1/Imagery/Map/Road/" + centerPoint + "/" + zoom + "?mapSize=500,500&";




       pin1 = "pp=" + std::to_string(originCity.lattitude) + "," + std::to_string(originCity.longitude) +  ";52;" + originCity.cityName;
       pin2 = "pp=" + std::to_string(destinationCity.lattitude) + "," + std::to_string(destinationCity.longitude) +  ";52;" + destinationCity.cityName;
       url = url + pin1;
       url = url +"&" + pin2;
       url = url + "&key=AqPQw6yAWUMKzyCKK9XAm_Yg4A1P0nbb5khDuzVlnI8pKFxY7TbD3sP2iowMW6vc";
       return url;
    //return "https://dev.virtualearth.net/REST/v1/Imagery/Map/Road/47.619048,-22.35384/1?mapSize=500,500&pp=47.620495,-83.34931;52;Detroit&pp=47.6,-122.35;34;Seattle&key=AqPQw6yAWUMKzyCKK9XAm_Yg4A1P0nbb5khDuzVlnI8pKFxY7TbD3sP2iowMW6vc";
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



