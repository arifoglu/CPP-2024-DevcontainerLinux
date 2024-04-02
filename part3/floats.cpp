#include <iostream>
#include <float.h>
using namespace std;

int main(){
    float a = 10.0 / 3;
    a = a * 10000000000000;
    cout << a <<endl;
    cout << std::fixed << a <<endl;
    

    double b = 7.7E4; // 7.7 x 10^4
    cout << b <<endl;
    

    long double c;
    return 0;
}