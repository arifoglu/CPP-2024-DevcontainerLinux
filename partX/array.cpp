#include <iostream>

void print_array(int array[],int size){
    for(int i = 0 ; i < size ; i++){
       std::cout << array[i] << " " ;
    }
}

int main(){
    int guesses[] = {10,12,14,16,18};
    int size = sizeof(guesses) / sizeof(int);
    print_array(guesses,size);


    //int size = sizeof(guesses) /  sizeof(guesses[0]);
    //std::cout << size <<std::endl; 

    //std::cout <<std::endl;
    return 0;
}