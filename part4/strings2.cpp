#include <iostream>
#include <string>

int main(){
    std::string salutation = "hello" ;
    salutation.append(" there");
    std::cout << salutation <<std::endl;
    
    // length()
    std::cout << salutation.length() <<std::endl;
    // size()
    std::cout << salutation.size() <<std::endl;
    // insert()
    std::cout << salutation.insert(2,"***") <<std::endl;
    //replace()
    std::cout << salutation.replace(2,3,"$$$") <<std::endl;
    //erase()
    std::cout << salutation.erase(2,3) <<std::endl;
 
}