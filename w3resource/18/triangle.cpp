#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // using Heron s formula to find an area of triangle
    double a,b,c;
    cout << "enter a 1st side :",
    cin  >> a ;
    cout << "enter a 2st side :",
    cin  >> b ;
    cout << "enter a 3st side :",
    cin  >> c ;

    // to find a half of the perimeter => s 
    double s = (a + b + c) / 2 ; 

    double area_of_triangle = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "area of the triangle : " << area_of_triangle <<endl;
    return 0;
}