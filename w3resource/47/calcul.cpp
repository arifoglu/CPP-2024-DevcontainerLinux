#include <iostream>

int main(){
    int nums[] = {1,2,3,4,5,6,7,8};
    int evens_total = 0;
    int odds_total = 0;

    int SIZE = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0 ; i < SIZE ;i++){
        if(nums[i] % 2 == 0 ){
            std::cout <<nums[i]  <<" even" <<std::endl;
            evens_total += nums[i];
        }else{
            std::cout << nums[i] <<" odd" <<std::endl;
            odds_total += nums[i];           
        } 
    }
            std::cout << "total odds  =" <<odds_total  <<std::endl;
            std::cout << "total evens =" <<evens_total <<std::endl;


    return 0;
}