#include <iostream>

int main(){
    int x,y;
    double a,b,c,d;

    x = 2;
    y = 4;

    a = x + y;
    b = x - y;
    c = x * y;
    d = double(x) / double(y);

    std::cout << x << "+" << y <<"="<<a <<std::endl;
    std::cout << x << "-" << y <<"="<<b <<std::endl;
    std::cout << x << "*" << y <<"="<<c <<std::endl;
    std::cout << x << "/" << y <<"="<<d <<std::endl;

    return 0;
}