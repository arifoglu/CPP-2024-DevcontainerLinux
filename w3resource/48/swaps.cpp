#include <iostream>

int main(){
    int a,b ;
    std::cout << "First Number: ";
    std::cin >> a;
    int *ptra = &a;
    
    std::cout << "Second Number: ";
    std::cin >> b;
    int *ptrb = &b ;

    std::cout << ptra << " = " << a <<std::endl;
    std::cout << ptrb << " = " << b <<std::endl;

    int swaps;
    std::cout << "Do you want to change these numbers?\n0.No\n1.Yes\n" ;
    std::cin >> swaps ; 
    if(swaps == 1)
    {
        *ptra = *ptra + *ptrb;
        *ptrb = *ptra - *ptrb;
        *ptra = *ptra - *ptrb;
        std::cout << "After swapping :\n";
        std::cout << "First = " << a << " Second =" << b << std::endl;
    }
    return 0;
}