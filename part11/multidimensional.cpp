#include <iostream>

int main(){
    int grades[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
    // std::cout << grades[2][1] <<std::endl;  

    for(int r = 0; r < 3;r++)
    {
        for(int c = 0; c < 3;c++)
        {
           std::cout << grades[r][c]<<"\t";   
        }
        std::cout << std::endl;
    }  
    return 0;
}