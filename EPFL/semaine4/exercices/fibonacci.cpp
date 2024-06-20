#include <iostream>
#include <limits>
#include <string>
using namespace std;

int demander_nombre(int min,int max);
int fibonacci(int n);
int fibonacciIteratif(int n);

int main(){
    char rep;
    do
    {
        int n = demander_nombre(0,40);
        cout << "Methode iteratif : " <<endl;
        cout << "F(" << n << ")" << fibonacciIteratif(n)<<endl;

        cout << "Methode recursive : " <<endl;
        cout << "F(" << n << ")" << fibonacci(n)<<endl;
        do
        {
            cout << "Voulez-vous recommencer [o/n] ? ";
            cin >> rep;
        } while ((rep != 'o') || (rep != 'n'));
         
    } while (rep == 'o');
    
    return 0;
};

int fibonacciIteratif(int n){
    int Fn = 0;
    int Fn1 = Fn;
    int Fn2 = 1;

    for(int i = 1;i <= n ;i++){
        Fn = Fn1 + Fn2;
        Fn2 = Fn1;
        Fn1 = Fn;
    }
    return Fn;
}
int fibonacci(int n){
if(n == 0){
    return 0;
}else if (n == 1){
    return 1;
}else{
    return fibonacci(n-1) + fibonacci(n-2);
}
}


int demander_nombre(int a,int b){
    int res ;
    do
    {
        cout << "Entrez un nombre int :";
        if(a >= b){
            cout << "supérieur ou égal à " << a ;
        }else{
            cout << "compris entre " << a << " et " << b;
            cout << " : ";
            cin >> res;
        }
    } while ((res < a) || ((res > b) && (res > b)));
    return res;
}