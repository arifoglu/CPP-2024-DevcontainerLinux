#include <iostream>
#include <vector>
#include <array>

int main(){
    int datas[] = {1,2,3,4,5};
    for(int n : datas){
        std::cout << n << "\t" ;
    }
    std::cout <<std::endl;

    // vectors
    std::vector<int> datas2 = {2,4,6,8,10};
    for(int m : datas2){
        std::cout << m << "\t";
    }
    std::cout <<std::endl;

    //stl array
    std::array<int,5> datas3 = {1,3,5,7,9};
    for(int k : datas3){
        std::cout << k <<"\t" ;
    }
    std::cout <<std::endl;



    return 0;
}