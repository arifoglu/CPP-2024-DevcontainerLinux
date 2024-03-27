#include <iostream>
#include <string>

int main(){
    std::string salutation ;
    //std::cin >> salutation;
    //std::cout << salutation <<std::endl;

    // getline
    getline(std::cin,salutation) ;
    std::cout << salutation <<std::endl;



}