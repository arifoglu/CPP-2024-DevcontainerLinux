#include <iostream>
#include <ios>
#include <iomanip>

int main(){
    int num = 24;
    std::cout << std::setfill('-')<< std::setw(5)  << num  << std::endl;

    char letter = 'A';
    std::cout << std::setfill('$') << std::setw(12) << letter <<std::endl ;
    
    return 0;
}