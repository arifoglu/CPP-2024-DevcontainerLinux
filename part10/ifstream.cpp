#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::ifstream file("/workspaces/CPP-2024-DevContainerLinux/part10/hello.txt");
    
    std::vector<std::string> names;
    std::string input;
    while(file >> input){
        names.push_back(input);
    }
    for(std::string name : names){
        std::cout << name <<std::endl;
     }

     return 0;
}