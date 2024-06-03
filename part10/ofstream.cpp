#include <iostream>
#include <fstream>
#include <vector>

int main(){

    std::ifstream file("news.txt");

    if (!file) {
        std::cerr << "Error: File could not be opened." << std::endl;
        return 1;
    }
    
    std::vector<std::string> names;

    std::string input;
    while(file >> input){
        names.push_back(input);
    }
    for(std::string& name : names){
        std::cout << name <<std::endl;
    }   
    return 0;
}