#include <iostream>

int main(){
    std::cout << "Table de multiplication"<<std::endl;
    int choice;
    std::cout << "Quelle multiplication que vous voulez (2 ou 5 ou 10) ?"<<std::endl;
    std::cout << "Tapez 2,5 ou 10:"<<std::endl;
    std::cin >> choice;
    switch(choice){
        case 2:
           for(int i = 1;i <= 10; i++){
             std::cout << i << " * " << 2 <<" = "<<i*2 <<std::endl;
           }
        break;
        case 5:
           for(int i = 1;i <= 10; i++){
             std::cout << i << " * " << 5 <<" = "<<i*5 <<std::endl;
           }
        break;
        case 10:
           for(int i = 1;i <= 10; i++){
             std::cout << i << " * " << 10 <<" = "<<i*10 <<std::endl;
           }
        break;        
    }
   
    return 0;
}