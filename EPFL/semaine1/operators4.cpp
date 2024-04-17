#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double angle_degre ;
    cout << "Enter a angle :" << endl;
    cin  >> angle_degre ;

    double angle_radians = (M_PI * angle_degre) / 180 ;
    cout << "sin" <<angle_degre<< " is " << sin(angle_radians) <<endl;
    cout << "cos" <<angle_degre<< " is " << cos(angle_radians) <<endl;
    cout << "tan" <<angle_degre<< " is " << tan(angle_radians) <<endl;
    return 0;
}
