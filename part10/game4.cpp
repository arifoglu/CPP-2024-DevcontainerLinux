#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <array>
#include <fstream>

void print_vector(std::vector<int> vector){
    for(int i = 0 ;i < vector.size() ;i++){
        std::cout << vector[i] << "\t";
    }
    std::cout << "\n";
}; 

void play_game(){
    std::vector<int> guesses;
    int count = 0;

    int random = rand() % 101;
    //std::cout << random <<std::endl;
    std::cout << "Guess a number(0-100) : " <<std::endl;
    while(true){
        int guess;
        std::cin >> guess;
        count++;
        guesses.push_back(guess);

        if(guess == random){
             std::cout << "You win!\n " <<std::endl;
             play_game();
        }else if (guess < random ){
             std::cout << "Too low!\n " <<std::endl;
        }else{
             std::cout << "Too high!\n " <<std::endl;
        }

        std::ifstream input("best_score.txt");

        if(!input.is_open()){
            std::cout << "unable to read file\n";
            return;
        } 

        int best_score;
        input >> best_score;

        std::ofstream output("best_score.txt");
        if(!output.is_open()){
            std::cout << "Unable to read file\n";
            return;
        } 
        if(count < best_score){
            output << count;
        }else{
            output << best_score;
        }
        print_vector(guesses);
    };
    
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



