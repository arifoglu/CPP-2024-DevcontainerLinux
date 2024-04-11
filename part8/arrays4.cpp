#include <iostream>

void print_array(int array[],int size){
    for(int i = 0; i < size ;i++){
        std::cout << array[i] << "\t";
    }
}

int main(){
    const int SIZE = 10;

    int nums[SIZE];
    for(int i = 0 ;i < SIZE ;i++){
        std::cin >> nums[i] ;
    }
    
    print_array(nums,SIZE);
    
   
    return 0;

}