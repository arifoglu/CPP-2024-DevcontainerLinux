#include <iostream>
#include <vector>

int add_vector(std::vector<int> NUMEROS,int choice){
    for(int i = 0;i < NUMEROS.size() ;i++){
        std::cout << NUMEROS[i] << " ";
    } 
    std::cout << std::endl;
    return 0;
}

int main(){
    std::vector<int> numeros = {21,22,23,24,25};

    std::cout << numeros.size() <<std::endl;  // 5
    std::cout << sizeof(numeros)  <<std::endl; // 24

    int choice;
    std::cout << "Enter a number " <<std::endl;
    std::cin >> choice ;

    numeros.push_back(choice); 

    add_vector(numeros,choice);

    return 0;
}
