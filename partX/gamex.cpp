#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

/* 
void print_array(int array[],int count){
    for(int i = 0; i < count ;i++)
    {
        std::cout << array[i] << "\t" ;     
    }
    std::cout << "\n";
}
*/

void print_vector(std::vector<int> vector){
    for(int i = 0; i < vector.size() ;i++)
    {
        std::cout << vector[i] << "\t" ;     
    }
    std::cout << "\n";
}

void play_game(){
    // Array type:
    //int guesses[250];
    //int guess_count = 0;
    
    // Vector type
    std::vector<int> guesses;

    int random = rand() % 251 ;
    std::cout << random <<std::endl;
    std::cout << "Guess a number : ";
    while(true)
    {
        int guess ;
        std::cin >> guess;

        // When we use array:  
        //guesses[guess_count++] = guess;    

        // When we use vector :
        guesses.push_back(guess);
        
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
     //Array type   
    //print_array(guesses,guess_count);    
    
    // vector Type
    print_vector(guesses);    
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