#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::ofstream file ;
    file.open("/workspaces/CPP-2024-DevContainerLinux/part10/hello.txt",std::ios::app);

    if(file.is_open()){
        
    }
    std::vector<std::string> names;
    names.push_back("A");
    names.push_back("B");
    names.push_back("C");
    names.push_back("D");
    names.push_back("E");

    for(std::string n : names){
        file << n <<std::endl;
    }
    
    file.close();

    return 0;
}