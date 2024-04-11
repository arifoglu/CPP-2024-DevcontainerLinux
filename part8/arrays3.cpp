#include <iostream>

void print_array(int array[],int size){
    std::cout << size <<std::endl;
}

int main(){

    int nums[] = {10,12,13,14,15};
    
    int size = sizeof(nums) / sizeof(int);
    std::cout << sizeof(int) <<std::endl;
    
    print_array(nums,size);
    
   
    return 0;

}