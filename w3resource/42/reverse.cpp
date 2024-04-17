#include <iostream>
#include <string>

int main(){
    std::string first_name,last_name;
    std::cout << "First Name :";
    std::cin  >> first_name ;
    std::cout << "Last Name :";
    std::cin  >> last_name ;

    std::string other = first_name;
    
    first_name = last_name;
    last_name = other;
    std::cout << "First Name : " << first_name << " " << "Last Name : " << other << std::endl;

}