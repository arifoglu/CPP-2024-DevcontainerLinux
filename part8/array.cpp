#include <iostream>

int main(){
    int nums[] = {10,11,12,13,14};

    std::cout << sizeof(nums) <<std::endl; // 20 

    int size = sizeof(nums) / sizeof(nums[0]);

    std::cout << size <<std::endl; // 5

    return 0;
}