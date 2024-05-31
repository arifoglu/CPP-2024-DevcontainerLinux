#include <iostream>

int main(){
    for(int i = 0; i < 9 ;i++){
        for(int j = 0 ;j <= i ;j++){
             std::cout << j + 1 ;
        }
        std::cout <<std::endl; 
    }
    std::cout <<std::endl;
    return 0;
}