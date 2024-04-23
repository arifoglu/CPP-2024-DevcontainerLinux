#include <iostream>
#include <cmath>

int main(){
    double principle,rate_of_interest,t;
    std::cout << "Principle : " ;
    std::cin >> principle;
    std::cout << "Rate of interest : " ;
    std::cin >> rate_of_interest;
    std::cout << "Time : " ;
    std::cin >> t;

    double compound_interest = principle * pow((1 + (rate_of_interest / 100)),t) - principle ;

    std::cout << "Compound interest is : " << compound_interest <<std::endl;

    double total = principle + compound_interest ;
    
    std::cout << "After " << t << " period " <<"Total : " << total <<std::endl;

    return 0;
}
