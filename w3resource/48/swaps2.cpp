#include <iostream>

int main(){
    int a,b ;
    std::cout << "First Number: ";
    std::cin >> a;
    std::cout << "Second Number: ";
    std::cin >> b;

    std::cout << a <<std::endl;
    std::cout << b <<std::endl;

    int swaps;
    std::cout << "Do you want to change these numbers?\n0.No\n1.Yes\n" ;
    std::cin >> swaps ; 
    if(swaps == 1)
    {
        a = a + b ;
        b = a - b ;
        a = a - b ;

        std::cout << "After swapping :\n";
        std::cout << "First = " << a << " Second =" << b << std::endl;
    }
    return 0;
}