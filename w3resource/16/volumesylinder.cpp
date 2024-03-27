#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius_of_sylinder ,height_of_sylinder;
    cout << "Enter a radius :" ;
    cin  >> radius_of_sylinder ;
    cout << "Enter a height :" ;
    cin  >> height_of_sylinder ;
    double volume_of_sylinder = (M_PI * height_of_sylinder * pow(radius_of_sylinder,2));
    cout << volume_of_sylinder <<endl;  
}