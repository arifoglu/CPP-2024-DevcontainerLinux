#include <iostream>
using namespace std;

int main(){
    int x = 3;
    cout << "l'adress de X = "<< &x  <<endl;
    int * ptr = &x;
    cout << "le pointer de X " << ptr  <<endl;

    int y = *&x;
    cout << y <<endl;

    return 0;
}