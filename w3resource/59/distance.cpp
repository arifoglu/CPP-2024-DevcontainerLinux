#include <iostream>
#include <cmath>

int main(){
    double latitude1,longitude1,latitude2,longitude2,radius_of_earth,earths_radius_km,distance_two_points;
    std::cout << "Latitude 1 : ";
    std::cin >> latitude1;
    std::cout << "Longitude 1 : ";
    std::cin >> longitude1;
    std::cout << "Latitude 2 : ";
    std::cin >> latitude2;
    std::cout << "Longitude 2 : ";
    std::cin >> longitude2;

    radius_of_earth = M_PI / 180;

    latitude1  *= radius_of_earth;
    longitude1 *= radius_of_earth;
    latitude2  *= radius_of_earth;
    longitude2 *= radius_of_earth;

    earths_radius_km = 6371.01 ;
    distance_two_points = earths_radius_km * acos((sin(latitude1) * sin(latitude2)) + (cos(latitude1) * cos(latitude2) * cos(longitude1 - longitude2)));

    std::cout <<"Distance of two points at the earth :" << distance_two_points <<std::endl;


    return 0;
}