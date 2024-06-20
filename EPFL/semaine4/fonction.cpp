#include <iostream>
using namespace std;

void f(int &x){
    x = x + 1;
    cout << "val passed a fonction 'val':"<< x <<endl;
}
int main(){
    int val = 1;
    cout << "val: "<<val<<endl;
    f(val);
    cout << "val: "<<val<<endl;
    return 0;
}