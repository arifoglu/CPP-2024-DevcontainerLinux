#include <iostream>
#include <cmath>

int main(){
    int a,b,c,d;
    std::cout << "Enter Four numbers :" <<std::endl;
    std::cin >> a >> b >> c >> d;
    int total = a + b + c + d;
    double average = double(total) / 4;  // we used type casting

    std::cout << average <<std::endl;

    return 0;
}