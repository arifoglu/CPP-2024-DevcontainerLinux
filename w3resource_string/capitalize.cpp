#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string capitalize_first_letter(string text){
    for(int i = 0; i < text.length();i++){
        if(i == 0 || text[i - 1] == ' '){
          text[i] = toupper(text[i]);
        }
    }
    return text;
}
int main(){
    string phrase;
    cout << "Enter a phrase : ";
    // to get all input line  we have to use getline instead of cin.!!!
    getline(cin,phrase);
    cout << capitalize_first_letter(phrase)<<endl;

    return 0;
}