#include <iostream>
#include <vector>

int main(){
    std::vector<int> data = {1,2,3};

    std::cout << data.size() <<std::endl; // 3
    std::cout << data[0] <<std::endl;     // 1
    data.push_back(12);                  // {1,2,3,12}  
    std::cout << data[3] <<std::endl;    // 12
    std::cout << data[data.size() -1 ] <<std::endl; // 12
   
    return 0;
}