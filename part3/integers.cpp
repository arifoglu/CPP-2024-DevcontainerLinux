#include <iostream>
#include <climits>
using namespace std;

int main(){
    short a;
    cout << sizeof(a) <<endl;   // 2 byte 16bits

    int b;
    cout << sizeof(b) <<endl;   // 4 byte 32bits

    long c;
    cout << sizeof(c) <<endl;   // 8 byte 64 bits

    long long d ;
    cout << sizeof(d) <<endl;   // 8  byte 64 bits
    

    //

    unsigned short aa;
    cout << sizeof(aa) <<endl;  // 2

    unsigned int bb;
    cout << sizeof(bb) <<endl;  // 4

    unsigned long cc;
    cout << sizeof(cc) <<endl;  // 8

    unsigned long long dd;
    cout << sizeof(dd) <<endl;  // 8

    // 
    long t = 9999999999999;
    cout << t <<endl;

    return 0;
}