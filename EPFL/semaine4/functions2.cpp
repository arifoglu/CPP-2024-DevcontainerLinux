#include <iostream>
#include <string>
using namespace std;

void f(int &x){
    x = x + 1;
    cout << " x =" << x <<endl;
}

int main(){
    cout << "enter a value : " ;
    int val ;
    cin >> val; 
    cout << &val <<endl;           // val reference = 0x5ffe9c
    cout << "val=" << val <<endl;  

    f(val);                        

    cout << "val=" << val <<endl;  
    cout << &val <<endl;           // val reference = 0x5ffe9c
 
    return 0;
}
