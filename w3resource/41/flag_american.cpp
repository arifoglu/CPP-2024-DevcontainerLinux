#include <iostream>

void stars(){
    for(int i = 0 ; i < 6 ; i++){
        std::cout << "* "; 
    }
}
void stars2(){
    for(int i = 0 ; i < 5 ; i++){
        std::cout << " * "; 
    }
}
void equals(){
    for(int i = 0 ; i < 30 ; i++){
        std::cout << "="; 
    }
}
void equals2(){
    for(int i = 0 ; i < 42 ; i++){
        std::cout << "="; 
    }
}

int main(){
    for(int k = 0 ; k < 15 ; k++){  
      if(k < 9){
        stars();
        equals();
        std::cout << std::endl;
      }else if(k >= 9){
        equals2();
        std::cout << std::endl;
      }
    }
    return 0;
}
