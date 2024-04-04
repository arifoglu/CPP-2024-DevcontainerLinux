#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number : " <<endl; 
    int n ;
    int total = 1;
    cin >> n ;
    

    for(int i = n ; i >= 1 ;i-- ){
        total *= i;
    }
    cout << n << "! = " <<total <<endl;


    return 0;
}