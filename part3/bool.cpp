#include <iostream>

int main(){
    bool found = false;
    std::cout << found << std::endl; // => 0
    std::cout << std::boolalpha << found << std::endl; // => false

    bool exist = true;
    std::cout << exist << std::endl; // => 1
    std::cout << std::boolalpha << exist << std::endl; // true

    return 0;
}