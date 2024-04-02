#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    int total_angle = 180;
    cout << "First angle : " ;
    cin  >> a ;
    cout << "Second angle : " ;
    cin  >> b ;
    cout << "Third angle : "<< total_angle - (a + b) <<endl;

    return 0;
}