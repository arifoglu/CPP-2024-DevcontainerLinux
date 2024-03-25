#include <iostream>
#include <iomanip>

int main(){
    double pi = 3.14159265;
    // fixed setprecision()
    std::cout << std::fixed << std::setprecision(4) << pi <<std::endl; // 3.1416
    std::cout << std::fixed << std::setprecision(8) << pi <<std::endl; // 3.14159265
    
    return 0;
}