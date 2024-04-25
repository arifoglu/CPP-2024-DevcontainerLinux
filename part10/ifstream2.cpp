#include <iostream>
#include <fstream>
#include <vector>


int main(){
    std::ifstream file ("/workspaces/CPP-2024-DevContainerLinux/part10/hello.txt") ;

    char temp = file.get();
    std::cout << temp << std::endl;

    std::string line;
    getline(file,line);
    std::cout << line << std::endl;
    
    // to read all line of files
    while(std::getline(file,line)){
     std::cout << line << std::endl;
    }
    
    
    return 0;
}