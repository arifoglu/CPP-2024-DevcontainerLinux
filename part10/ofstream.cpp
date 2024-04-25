#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::ofstream file ;
    file.open("/workspaces/CPP-2024-DevContainerLinux/part10/hello.txt",std::ios::app);

    std::vector<std::string> names;
    names.push_back("Aalcon is a name1");
    names.push_back("Balcon is a name2");
    names.push_back("Calcon is a nam3");
    names.push_back("Dalcon is a name4");
    names.push_back("Ealcon is a nam5");

    for(std::string n : names){
        file << n <<std::endl;
    }
    
    file.close();

    return 0;
}