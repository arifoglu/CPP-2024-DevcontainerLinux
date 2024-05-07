#include <iostream>
#include <cmath>

int main(){
    int number,first,last,sum,digits,new_number,a,b;

    std::cout << "Number : " ;
    std::cin >> number ;

    digits = (int)log10(number);
    //std::cout << digits <<std::endl;

    first = number / pow(10,digits);
    last = number%10 ;

    // changing digits place

    a = first * (pow(10,digits));
    b = number%a ;
    number = b / 10 ;

    new_number = last * (pow(10,digits)) + (number * 10 + first) ; 

    std::cout << new_number <<std::endl;

    return 0;
}