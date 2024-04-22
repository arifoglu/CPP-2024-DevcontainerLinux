#include <iostream>
#include <cmath>

int main(){
    double side;
    std::cout << "Side of triangle equilateral : ";
    std::cin >> side;
    double area_of_triangle = (pow(side,2) * sqrt(3) ) / 4 ;
    std::cout << "Area of this triangle " << area_of_triangle <<std::endl;

    return 0;
}