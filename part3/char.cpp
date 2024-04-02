#include <iostream>
#include <climits>
using namespace std;

int main(){
    char x = 'A';
    cout << x <<endl;
    char y = 65;
    cout << y <<endl;
    char z = 65;
    cout << (int) x <<endl;
    cout << (int) y <<endl;
    cout << (int) z <<endl;

    char t = 129;
    cout << (int) t <<endl;  // -127
    
    unsigned char f = 129;   //  129
    cout << (int) f <<endl;
    return 0;
}