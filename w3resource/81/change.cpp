#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string phrase = "The quick brown fox jumps over the lazy dog.then these animals more than quick a ordinary dog.";
    while(phrase.find("dog") != string::npos){
        phrase.replace(phrase.find("dog"),3,"cat");
        
    }
    cout << phrase <<endl;
    return 0;
}