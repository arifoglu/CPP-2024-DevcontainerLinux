#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double degree_fahrenheit ;
    cout << "Enter a fahrenheit degree :";
    cin  >> degree_fahrenheit;

    double convert_to_kelvin = (degree_fahrenheit + 459.67) / 1.8 ;

    cout << degree_fahrenheit << "°F equal " << convert_to_kelvin <<" °K" <<endl;


    return 0;
}