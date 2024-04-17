#include <iostream>
using namespace std;

int main(){
    double x ;
    x = 1 / 2;         // two of these are int   
    cout << x <<endl;  // result is => 0

    int note1 = 4;
    int note2 = 5;
    
    double moyenne = (note1 + note2) / 2 ;  // two variables are int 
    cout << moyenne <<endl;                //  result is => 4

    // to avoid this type of problem
    int note3 = 4;
    int note4 = 5;
    double moyenne2 = note3 + note4;
    moyenne2 /= 2 ;
    cout << moyenne2 <<endl;               // result is => 4.5
    

    return 0;
}