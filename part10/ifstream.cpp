#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::string filename;
    std::cin >> filename;

    std::ofstream file(filename.c_str(),std::ios::app);
    
    if(file.is_open()){
        std::cout << "file opened \n";
    }
    std::vector<std::string > names;

    names.push_back("AW");
    names.push_back("QW");
    names.push_back("EW");

    for(std::string name : names){
        file << name <<std::endl;
    } 
    file.close();
       
    return 0;
}