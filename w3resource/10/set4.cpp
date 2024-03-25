#include <iostream>
#include <ios>
#include <iomanip>

int main(){
    double num = 2.3456789;

    // setwidth
    std::cout << std::setw(10) << num << std::endl; 

    // setfill
    std::cout << std::setfill('-') << std::setw(10) << num <<std::endl;

    // setprecision
    std::cout << std::setprecision(3) << num <<std::endl;

    // 
    std::cout << std::setfill('$') << std::setw(10)<<std::setprecision(3)  << num << std::endl;
    return 0;
}