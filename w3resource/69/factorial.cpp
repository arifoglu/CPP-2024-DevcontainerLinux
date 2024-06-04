#include <iostream>

int main(){
    int n,factorial = 1;
    std::cout << "Enter a number :\n";
    std::cin >> n;
    for(int i = 1; i <= n;++i){
        factorial *= i;
    }
    std::cout << n <<"! = " <<factorial <<std::endl;
    return 0;
}