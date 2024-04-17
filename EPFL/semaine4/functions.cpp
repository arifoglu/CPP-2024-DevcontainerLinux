#include <iostream>
#include <string>
using namespace std;

void f(int &x){
    x = x + 1;
    cout << " x =" << x <<endl;
}

int main(){
    int val = 1; 
    cout << &val <<endl;           // val reference = 0x5ffe9c
    cout << "val=" << val <<endl;  // val = 1

    f(val);                        // val = 1 => x = 2 // int val = &x => val = 2

    cout << "val=" << val <<endl;  // val = 2
    cout << &val <<endl;           // val reference = 0x5ffe9c
 
    return 0;
}