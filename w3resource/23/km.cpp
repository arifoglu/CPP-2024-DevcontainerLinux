#include <iostream>
#include <string>
using namespace std;

int main(){
    double km;
    const double rate_km_mile = 0.6213711922 ;
    cout << "Enter a km : " <<endl;
    cin  >> km ;
    double km_to_mile = km * rate_km_mile;
    cout << km << " km " << " is " << km_to_mile <<" miles per hour." <<endl; 
    return 0;
}