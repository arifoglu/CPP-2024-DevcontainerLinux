#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string words,words2;
    cout << "Enter a word : ";
    cin >> words;

    reverse(words.begin(),words.end());
    
    cout << words <<endl;

    return 0;
}