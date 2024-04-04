#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double a,b,angle,s;
    cout << "Sides of triangle(first,second) :"<<endl;
    cin  >> a >> b  ;
    cout << "Angle :" <<endl;
    cin  >> angle ;
    double area_triangle = (a * b * sin((M_PI / 180) * angle)) / 2 ;
    cout << "This area = " << area_triangle <<endl; 
    
}