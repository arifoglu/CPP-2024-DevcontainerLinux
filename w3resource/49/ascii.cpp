#include <iostream>
#include <string>

int main(){
    char x;
    bool running = true;

    while(running){
        std::cout << "Enter a character :";
        std::cin  >> x;
        if(x != 'q')
        {     
            std::cout << int(x) <<std::endl;
        }
        else
        {
             running = false ;
        }
    }
    
    return 0;
}
