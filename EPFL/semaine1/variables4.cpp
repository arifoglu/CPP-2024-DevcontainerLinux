#include <iostream>
using namespace std;

int main(){
    int a = 1 , b = 2;
    int temp = a ;
    a = b ;
    b = temp;
    cout << a <<endl;       // 2
    cout << b <<endl;      //  1
    cout << temp <<endl;   //  1

    return 0;
}