#include <iostream>

void print_array(int array[],int size){
    for(int i = 0; i < size ;i++){
        std::cout << array[i] << "\t";
    }
}

int main(){
    const int SIZE = 10;
    int nums[SIZE];
    int count = 0;

    for(int i = 0 ;i < SIZE ;i++){
       if(std::cin >> nums[i]) // This means if true or false 
       {
        count++;
       }
       else 
       {
             break;
       }
        
    }
    
    print_array(nums,count);
    std::cin.clear();
    std::cin.ignore(1000,'\n');

    return 0;

}