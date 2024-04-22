#include <iostream>

int main(){
    double principle,rate_of_interest;
    int year;
    std::cout << "Principle : " ;
    std::cin >> principle;
    std::cout << "Rate of interest : " ;
    std::cin >> rate_of_interest;
    std::cout << "Year : " ;
    std::cin >> year;

    double simple_interest = (principle * rate_of_interest * year ) / 100;

    std::cout << "Simple interest is : " << simple_interest <<std::endl;


    return 0;
}