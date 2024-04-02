#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double degree_fahrenheit ;
    cout << "Enter a Fahrenheit degree :";
    cin  >> degree_fahrenheit;

    double convert_to_celcius = (degree_fahrenheit - 32) / 1.8 ;

    cout << degree_fahrenheit << "°F equal " << convert_to_celcius <<" °C" <<endl;


    return 0;
}