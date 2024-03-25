#include <iostream>
using namespace std;



int main(){
    cout << "what do you want : \naddition (1)\nsubstraction(2)\nmultiply(3)\ndivide(4)\n" ;
    int choice;
    cin  >> choice;

    int a,b; 
    cout << "Enter two integer :" <<endl;
    cin  >> a >> b ;

    switch(choice){
        case 1 :
            cout << a << "+" << b << "=" <<a + b <<endl;
            break;
        case 2 :
            cout << a << "-" << b << "=" << a - b <<endl;
            break;
        case 3 :
            cout << a << "*" << b << "=" << a * b <<endl;
            break;
        case 4 :
            cout << a << "/" << b << "=" <<a / b <<endl;
            break ;
        default :
            cout << "Enter a two integer pls \n";                  
    }
    return 0;
}