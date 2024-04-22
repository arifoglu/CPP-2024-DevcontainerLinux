#include <iostream>

int print_array(int array[],int size){
    for(int i = 0;i < size ;i++){
        std::cout << array[i] <<std::endl;
    };
    return 0;
}

int main(){
    int numeros[] = {21,22,23,24,25};

    std::cout << sizeof(numeros) <<std::endl; // 20 
    std::cout << sizeof(numeros) / sizeof(numeros[0]) <<std::endl; // 5

    int size = sizeof(numeros) / sizeof(numeros[0]);

    print_array(numeros,size); // we have to pass name of array and its size

    return 0;
}