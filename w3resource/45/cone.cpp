#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius_of_cone ,height_of_cone;
    cout << "Enter a radius :" ;
    cin  >> radius_of_cone ;
    cout << "Enter a height :" ;
    cin  >> height_of_cone ;
    double volume_of_cone = (M_PI * height_of_cone * pow(radius_of_cone,2)) / 3 ;
    cout << volume_of_cone <<endl;  
}