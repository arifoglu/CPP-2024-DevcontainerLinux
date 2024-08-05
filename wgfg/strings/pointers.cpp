#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "daily";
    char* p = &s[0];
    cout << &s <<endl;
    cout << p <<endl;
    return 0;
}