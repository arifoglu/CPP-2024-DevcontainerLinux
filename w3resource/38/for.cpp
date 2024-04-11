#include <iostream>

int main(){
    int num,ultime;
    int total = 0;
    std::cout << "Enter a number " ;
    std::cin >> num ;
    std::cout << "Enter a ultimate line " ;
    std::cin >> ultime ;

    for(int i = 0 ; i < ultime ;i++ ){
        total = num * i;
        std::cout << num << " * " << i << " = " <<total <<std::endl;
    }
    return 0;
}