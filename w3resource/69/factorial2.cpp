#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n){
    if( n==0 || n==1)
    return 1;
    return n * factorial(n-1);
}

int main(){
    int n;
    cout << "Enter a number:\n";
    cin >> n;
    cout << n << "! = "  <<factorial(n);

    return 0;
}
