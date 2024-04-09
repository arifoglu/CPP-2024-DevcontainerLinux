#include <iostream>

int main(){
    int nums[] = {10,12,13,14,15};

    int size = sizeof(nums) / sizeof(nums[0]);
    std::cout << size <<std::endl;

    for(int i = 0; i < size ;i++){
     if(i == 0){
         std::cout << "{" ;
      };
    
      std::cout << nums[i] << ",";
    
     if(i == size - 1){
          std::cout << "}" ;
       };
     }

    return 0;
}