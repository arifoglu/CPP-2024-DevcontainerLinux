#include <iostream>

int main(){
    double nums[45];
    int count = 0;
    
    std::cout << "Type numbers : "<<std::endl;
    while(std::cin >> nums[count++]);
    std::sort(nums,nums + count - 1);
    std::cout << "Difference " << nums[count - 2] - nums[0] <<std::endl;
    return 0;
}