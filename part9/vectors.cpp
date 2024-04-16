#include <iostream>
#include <vector>

int main(){
    std::vector<int> data = {1,2,3};

    std::cout << data[0] <<std::endl;
    data.push_back(12);
    std::cout << data[3] <<std::endl;
    std::cout << data[data.size() -1 ] <<std::endl;
   
    return 0;
}