#include <iostream>
#include <ios>
#include <iomanip>

int main(){
    double num = 30;
    std::cout  << "original number is :" << num <<std::endl;
    std::cout  << "settting width " << std::setw(6) << num <<std::endl;
    
    double num2 = 40;
    std::cout << "original number is :" << num << std::endl;
    std::cout << "setfill \'$\' :" << std::setfill('-') << std::setw(6) << num <<std::endl;
    
    double pi = 3.14159265;
    std::cout << "pi is : " << std::setprecision(3) << pi <<std::endl;
    std::cout << std::scientific << pi << std::endl; 
    return 0;
}