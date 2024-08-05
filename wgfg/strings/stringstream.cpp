#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string s = "Daily news are important for people life.";
    stringstream obj(s);
    string temp;

    // >> operator will read from object
    while(obj >> temp){
        cout << temp <<endl;
    }
    cout << s <<endl;

    return 0;
}