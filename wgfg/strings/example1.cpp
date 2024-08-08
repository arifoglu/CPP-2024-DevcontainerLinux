#include <iostream>
#include <string>
using namespace std;

int main(){
    string str ;
    getline(cin,str) ;
    cout << str <<endl;
    str.push_back('.');
    cout << str <<endl;
    str.pop_back();
    cout << str <<endl;

    
    return 0;
}