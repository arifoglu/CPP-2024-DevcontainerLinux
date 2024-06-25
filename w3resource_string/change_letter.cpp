#include <iostream>
#include <string>
using namespace std;

string change_letter(string words);

int main(){
    string word;
    cout << "Enter a word : " ;
    cin >> word;
    cout << change_letter(word)<<endl;
    return 0;
}

string change_letter(string words){
    int char_code;
    for(int i = 0; i < words.length() ;i++){
        char_code = int(words[i]);

        if(char_code == 122)
        {
            words[i] = char(97);
        }
        else if(char_code == 90)
        {
            words[i] = char(65);
        }
        else if(char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
        {
            words[i] = char(char_code + 1);
        }
    }
    return words;
};
