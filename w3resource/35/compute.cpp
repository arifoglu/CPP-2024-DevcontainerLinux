#include <iostream>

int main(){
    int a;
    std::cout << "Enter a integer : " ;
    std::cin  >> a;
    double b;
    std::cout << "Enter a double  : " ;
    std::cin  >> b;

    double total = double(a) + b;
    std::cout << a << "+" << b << "=" << total <<std::endl;
    
    return 0;
}