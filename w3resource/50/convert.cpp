#include <iostream>

int main(){
    double cm,m,km;
    std::cout << "Enter a length as m :" ;
    std::cin >>  m;
    cm = m * 100 ;
    km = m / 1000;
    std::cout << m << "m = " << cm << "cm = " << km << "km "<<std::endl;

    return 0;
}