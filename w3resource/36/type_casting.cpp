#include <iostream>
#include <iomanip>

int main(){
    double num;
    std::cout << "Enter a float number " ;
    std::cin  >> num ;
    // explicit type
    std::cout << int(num) << std::endl;
    
    // implicit type
    int new_num = num;
    std::cout << new_num <<std::endl;
    
    ///////////////////
    int num2;
    std::cout << "Enter a integer: " ;
    std::cin  >> num2;

    std::cout << std::fixed << std::setprecision(2) << num * num2 <<std::endl;  
    
    return 0;
}