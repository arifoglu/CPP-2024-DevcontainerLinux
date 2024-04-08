#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1,num2 ;
    cout << "Type a number " <<endl;
    cin  >> num1 >> num2 ;

    int quotient = num1 / num2;
    int remainder = num1 % num2 ; 

    cout << quotient <<endl;
    cout << remainder << endl;


    return 0;
}