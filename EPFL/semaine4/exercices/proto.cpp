#include <iostream>
using namespace std;

int demander_nombre(int min,int max);

int main(){
    int num;
    num = demander_nombre(23,100);
    cout << "Le nombre est: " << num <<endl;
    return 0;
}

int demander_nombre(int a,int b){
    if(a > b){
        int temp = b;
        b = a;
        a = temp;
    }
    int res;
    do{
        cout << "Entrez un nombre entier compris entre " << a << " et " << b << " : " ;
        cin >> res;
    }while((res < a) || (res > b));

    return  res;
};