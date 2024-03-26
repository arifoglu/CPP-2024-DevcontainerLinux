#include <iostream>
using namespace std;

int sum(int a ,int b){
    int total = a + b ;
    return total ;
}
int main(){
    int num1,num2;
    cout << "Input 1st number :";
    cin  >> num1;
    cout << "Input 2st number :";
    cin  >> num2;

    cout << num1 << "+" << num2 << "=" <<sum(num1,num2) <<endl;

    return 0;
}