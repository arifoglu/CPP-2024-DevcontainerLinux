#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <array>

void play_game();

void print_array(std::array<int,251> array,int size){
    for(int i = 0 ;i < size ;i++){
        std::cout << array[i] << "\t";
    }
    std::cout << "\n";
};

int main(){
    srand(time(NULL));

    std::cout << "Do you want to play a game? \n0.Quit game\n1.Play game\n";
    int choice;
    std::cin >> choice ;

    do{
        switch(choice){
           case 0:
             std::cout << "Ok.Another time " <<std::endl;
             break;
           case 1:
             std::cout << "Let's start " <<std::endl;
             play_game();
             break;
        }

    }while(choice != 0);

    return 0;
};

void play_game(){
    std::array<int,251> guesses;
    int count = 0;

    int random = rand() % 101;
    //std::cout << random <<std::endl;
    std::cout << "Guess a number(0-100) : " <<std::endl;
    while(true){
        int guess;
        std::cin >> guess;
        
        guesses[count++] = guess;

        if(guess == random){
             std::cout << "You win!\n " <<std::endl;
             play_game();
        }else if (guess < random ){
             std::cout << "Too low!\n " <<std::endl;
        }else{
             std::cout << "Too high!\n " <<std::endl;
        }
        print_array(guesses,count);
    };
    
};

