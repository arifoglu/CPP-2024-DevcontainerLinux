#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double degree_celcius ;
    cout << "Enter a celcius degree :";
    cin  >> degree_celcius;

    double convert_to_fahrenheit = (degree_celcius * 1.8) + 32 ;

    cout << degree_celcius << "°C equal " << convert_to_fahrenheit <<" °F" <<endl;


    return 0;
}