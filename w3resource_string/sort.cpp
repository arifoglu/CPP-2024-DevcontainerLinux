#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sorting(string inputs){
    for(int i = 0;i < inputs.length();i++){
      sort(inputs.begin(),inputs.end());
    }
    return inputs;
}

int main(){
    string phrase;
    cout << "Type a phrase "<<endl;
    getline(cin,phrase);
    cout << sorting(phrase) <<endl;

    return 0;
}