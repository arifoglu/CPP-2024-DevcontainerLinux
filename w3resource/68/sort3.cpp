#include <iostream>
#include <vector>
#include <array>

int main(){
    std::vector<int> numbers(7);
    std::cout << "Numbers : \n";
    for(int i = 0; i < 7;i++){
        std::cin >> numbers[i];
    };
    std::sort(numbers.begin(),numbers.end());
    std::cout << "Ordering from up to down" <<std::endl;
    for(int i = 6 ;i >= 0;i--){
        std::cout << numbers[i]<< std::endl;
    }
    return 0;
}