#include <iostream>

int main(){
    std::cout << "Enter a Number : " ;
    int num;
    std::cin  >> num;

    if(num<0){
        std::cout << "It is a negative number .\n";
    }else if(num == 0){
        std::cout << "It is a zero .\n" ;
    }else{
        std::cout << "It is a positive number .\n";
    };
    

    return 0;
}