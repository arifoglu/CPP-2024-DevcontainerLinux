#include <iostream>
#include <cmath>

int main(){
    double number_of_sides ,length_of_sides;
    std::cout << "Number of sides of the polygon " ;
    std::cin >> number_of_sides;
    std::cout << "Length of side" ;
    std::cin >> length_of_sides;
    // formulas (n * s) / 4 tan(pi / n)
    double area_of_polygon = (number_of_sides * pow(length_of_sides,2)) / (4.0 * tan(M_PI / number_of_sides));
    std::cout << "area of polygon " << area_of_polygon <<std::endl;
    return 0;
}