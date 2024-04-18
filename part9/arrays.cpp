#include <iostream>
#include <vector>
#include <array>

void print_array(std::array<int ,10> datas){
    for(int i = 0; i < datas.size();i++){
        std::cout << datas[i] << "\t" ;
    }
    std::cout << "\n";
}

int main(){
    std::array<int,10> datas = {1,2,3};
    
    std::cout << datas.size() <<std::endl;
    
    //print_array(datas);

    return 0;
}