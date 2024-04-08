#include <iostream>
#include <string>
using namespace std;

int main(){
    string password = "hihi";
    string guess;

    do{
        cout << "Guess the password : " ;
        cin  >> guess;
    }while(guess != password);







    return 0;
}