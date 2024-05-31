#include <iostream>

int main(){
    int nums[] = {1,2,3,4,5};
    std::cout << sizeof(nums)<<std::endl;
    std::cout << sizeof(nums)/ sizeof(nums[0])<<std::endl;
    return 0;
}