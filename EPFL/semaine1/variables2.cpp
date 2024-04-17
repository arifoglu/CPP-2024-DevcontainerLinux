#include <iostream>
using namespace std;
int main(){
    int a = 2,b=1;
    b = a * (b + 2);
    cout << a << ", " << b << endl; // 2,6
    return 0;
}