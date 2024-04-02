#include <iostream>
#include <cmath>
using namespace std;

// definition
double power(double base,int exponent){
    double result = 1;
    for(int i = 0 ; i < exponent ; i++){   
       result *= base ;
    };
    return result;
}

void print_pow(double base,int exponent){
    double mypower = power(base, exponent);
    cout << mypower <<endl;
}

int main(){
    double base;
    int exponent;
    cout << "What is the base ? :" ;
    cin  >> base;
    cout << "What is the exponent ? :" ;
    cin  >> exponent;
    
    print_pow(base,exponent);
    return 0;
}

