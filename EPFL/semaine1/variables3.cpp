#include <iostream>
using namespace std;

int main(){
    int a = 1,b = 2;
    a = b;
    b = a;
    cout << a << ", " << b << endl;  // result is 2, 2

    return 0;
}