#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double degree_kelvin ;
    cout << "Enter a kelvin degree :";
    cin  >> degree_kelvin;

    double convert_to_fahrenheit = (degree_kelvin * 1.8) - 459.67 ;

    cout << degree_kelvin << "°K equal " << convert_to_fahrenheit <<" °F" <<endl;


    return 0;
}