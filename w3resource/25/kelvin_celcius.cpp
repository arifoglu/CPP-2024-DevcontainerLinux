#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double degree_kelvin ;
    cout << "Enter a kelvin degree :";
    cin  >> degree_kelvin;

    double convert_to_celcius = degree_kelvin - 273.15 ;

    cout << degree_kelvin << "°K equal " << convert_to_celcius <<" °C" <<endl;


    return 0;
}