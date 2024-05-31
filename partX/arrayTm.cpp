#include <iostream>
#include <array>

void print_array(std::array<int ,10> sayilar){
    for(int i = 0; i < sayilar.size();i++){
        std::cout << sayilar[i] << "\t" ;
    }
    std::cout << "\n";
}

int main(){
    std::array<int,10> nums = {1,2,3};

    std::cout << nums.size() <<std::endl;

    
    print_array(nums);

    return 0;
}