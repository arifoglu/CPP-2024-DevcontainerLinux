#include <iostream>
#include <limits>

void print_array(int array[],int size){
    for(int i = 0 ; i < size ; i++){
       std::cout << array[i] << " " ;
    }
    std::cout <<std::endl;
}

int main(){
    const int SIZE = 10;
    int guesses[SIZE];
    int count = 0;

    for(int i = 0; i < SIZE ;i++){
        if(std::cin >> guesses[i])
        {
            //valid
            count++;  
        }
        else
        {
            //invalid
            break;
        };
    
      print_array(guesses,count);
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return 0;
}    