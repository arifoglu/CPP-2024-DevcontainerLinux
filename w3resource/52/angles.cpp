#include <iostream>

int main(){
    double a,b,c;
    std::cout << "First angle  : " ;
    std::cin >> a ;
    std::cout << "Second angle : " ;
    std::cin >> b ;

    c = 180 - (a + b);

    std::cout << "Triangle's angles are : " << a << " " << b  << " " << c <<std::endl;

}