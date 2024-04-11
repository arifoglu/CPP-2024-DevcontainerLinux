#include <iostream>

void print_array(int array[]){
    std::cout << sizeof(array) <<std::endl;  // => 8
}

int main(){
    int nums[] = {10,12,13,14,15};

    std::cout << sizeof(nums) <<std::endl;  // => 20

    print_array(nums);

    return 0;

}