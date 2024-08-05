#include <iostream>
#include <string>
using namespace std;

int main(){
    // C style strings:
    char s[] = "hello";
    cout << s <<endl;

    // String class
    string str  = "world";
    cout << str <<endl;

    // 
    string str2 (3,'C');
    cout << str2 <<endl;
    return 0;
}