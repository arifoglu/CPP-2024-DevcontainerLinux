#include <iostream>
#include <cmath>

int main(){
    int a,b,c;
    std::cout << "Enter tree sides for right angle :\n";
    std::cin >> a >> b >> c;
    if(c*c == a*a + b*b){
        std::cout << "This is a right angle.\n ";
    } else {
        std::cout << "This is not a right angle.\n";
    }
    return 0;
}