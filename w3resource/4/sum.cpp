#include <iostream>
using namespace std;

int addition(int x,int y){
    int sum = x + y;
    return sum;
}

int main(){
    int a,b;
    cout << "Enter a number :" ;
    cin  >> a;
    cout << "Enter a number :" ;
    cin  >> b;
    cout << "sum of them = " << addition(a,b) <<endl; 
    return 0;
}