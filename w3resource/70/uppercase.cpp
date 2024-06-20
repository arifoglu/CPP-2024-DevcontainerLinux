#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main (){
    string str,x;
    cout << "Type a word:\n";
    cin >> str;
    x = str;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout <<"After operation : "<< x <<" has transformed to "<< str <<endl;

    return 0;
}