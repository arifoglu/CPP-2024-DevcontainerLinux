#include <iostream>

int main(){
    int size;
    std::cout << "Enter the size of array : ";
    std::cin  >> size;

    int *nums = new int[size];

    std::cout << "This array will be positioned at this point : " <<nums <<std::endl;

    std::cout << "Enter " << size << " elements : " << std::endl;
    
    for(int i = 0 ; i < size ;i++){
        std::cin >> nums[i] ;
    }

    int evens_total = 0;
    int odds_total = 0;

    for(int i = 0 ; i < size ;i++){
        if(nums[i] % 2 == 0 ){
            std::cout << nums[i] << " even" <<std::endl;
            evens_total += nums[i];
        }else{
            std::cout << nums[i] << " odd" <<std::endl;
            odds_total += nums[i];
        }
    }
    std::cout << "Total odds " << odds_total <<std::endl;
    std::cout << "Total evens " << evens_total <<std::endl;

    std::cout <<nums << std::endl;

    delete[] nums;

    std::cout <<nums << std::endl;


   


    return 0;
}