#include <iostream>

int main(){
    int n,total;
    std::cout << "Number : ";
    std::cin >> n;
    total = (n * (n + 1)) / 2 ;
    std::cout << "From 1 to " << n << " : " << total <<std::endl;
    return 0;
}