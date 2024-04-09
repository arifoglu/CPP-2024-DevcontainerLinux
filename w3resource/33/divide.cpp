#include <iostream>

int main(){
    int num1,num2;
    std::cout << "First number :";
    std::cin  >> num1;
    
    std::cout << "Second number :";
    std::cin >> num2 ;

    double division = double(num1) / double(num2) ;

    std::cout << num1  <<"/" << num2 << "=" <<division <<std::endl;

    return 0;
}