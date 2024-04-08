#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double degree_celcius ;
    cout << "Enter a kelvin degree :";
    cin  >> degree_celcius;

    double convert_to_kelvin = degree_celcius + 273.15 ;

    cout << degree_celcius << "°C equal " << convert_to_kelvin <<" °K" <<endl;


    return 0;
}