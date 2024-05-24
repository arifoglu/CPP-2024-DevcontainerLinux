#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game(){
    int guesses[250];
    
    int random = rand() % 251 ;
    std::cout << random <<std::endl;
    std::cout << "Guess a number : ";
    while(true){
        int guess ;
        std::cin >> guess;
        if(guess == random)
        {
            std::cout << "You win\n";
        }
        else if(guess < random)
        {
            std::cout << "Too low\n";
        }
        else if(guess > random)
        {
            std::cout << "Too high\n";
        }
    }
       
}
int main(){
    srand(time(NULL));
    int choice;
    do{
      std::cout <<  "0.Quit" << std::endl << "1.Play Game\n";
      std::cin >> choice ;
      switch(choice){
          case 0:
             std::cout << "Thanks for nothing.\n" ;
             return 0;
          case 1 :
             std::cout << "Let's play.\n";
             play_game();
             break;  
      }
    }while(choice != 0);
    
    return 0;
}