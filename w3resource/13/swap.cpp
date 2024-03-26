#include <iostream>
using namespace std;

int main(){
    int num1,num2,middle;
    cout << "Input 1st number :";
    cin  >> num1;
    cout << "Input 2st number :";
    cin  >> num2;

    middle = num1 ;

    num1 = num2 ;
    cout << "After swapping 1st number is :" << num1 <<endl;

    num2 = middle ;
    cout << "After swapping 2st number is :" << num2 <<endl;
    

    return 0;
}