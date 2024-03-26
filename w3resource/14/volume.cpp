#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius_of_sphere ;
    cout << "Enter a radius :" ;
    cin  >> radius_of_sphere ;
    double volume_of_sphere = ((4 * M_PI * pow(radius_of_sphere,3)) / 3);
    cout << volume_of_sphere <<endl;  
}