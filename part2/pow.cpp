#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << pow(10, 2) <<endl;
    int base,exponent;
    cin >> base;
    cin >> exponent;
    cout << base << "^" << exponent << " = "<< pow(base, exponent) <<endl;
    return 0;
}