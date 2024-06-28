#include <iostream>
#include <string>
using namespace std;

int vovels(string input){
    int total = 0;
    for(int i = 0;i < input.length();++i){
        char ch = tolower(input[i]);
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
         ++total;
    }
    return total;
}

int main(){
    string words;
    cout << "Enter a word : ";
    getline(cin,words);

    cout << "Number of vovels : " <<vovels(words)<<endl;
    return 0;
}