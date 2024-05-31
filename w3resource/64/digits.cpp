#include <iostream>
#include <sstream>

int main(){
    int a,b;
    std::cout << "Enter two numbers :\n";
    while(std::cin >> a >> b ){
        std::stringstream str1;
        str1 << a + b;
        std::cout << str1.str().size()<<" digits " <<std::endl;        
    }
    return 0;
}