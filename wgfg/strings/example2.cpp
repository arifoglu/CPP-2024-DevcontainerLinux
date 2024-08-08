#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "daily";
    string str2 = " news";
    str.insert(5,str2);
    cout << str <<endl;
    str.erase(6);
    cout << str <<endl;

    return 0;
}