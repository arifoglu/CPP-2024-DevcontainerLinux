#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius;
    cout << "Enter a radius for a circle" ;
    cin  >> radius ;

    double area_of_circle = (M_PI * pow(radius,2)) ;
    cout << "Circle area :" << area_of_circle <<endl;
    
    double perimeter_of_circle = (2 * M_PI * radius);
    cout << "Circle perimeter:" << perimeter_of_circle <<endl;

    return 0;
}