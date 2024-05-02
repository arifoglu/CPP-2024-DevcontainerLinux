#include <iostream>
#include <cmath>

int main(){
    double side;
    std::cout << "Side of hexagon : " ;
    std::cin >> side ;

    double area_of_hexagon = (3 * sqrt(3) * pow(side,2)) / 2 ;

    std::cout << "Area of hexagon " << area_of_hexagon <<std::endl;

    return 0;
}