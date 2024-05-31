#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    bool premier = true;
    int diviseur = 1;
    do{
        cout << "Entrez un nombre entier > 1 : ";
        cin >> n;
    }while(n <= 1);
    if(n % 2 == 0)
    {
        if(n != 2){
            premier = false;
            diviseur = 2;
        }
    }
    else
    {
        const double borne_max(sqrt(n));
        for(int i = 3; premier && i <= borne_max ;i+=2){
            if(n % i == 0){
                premier = false;
                diviseur = i;
            }
        }
    }
    cout << n;
    if(premier){
        cout << " est premier " <<endl;
    }else {
        cout << " n'est pas premier ,car il est divisible par " << diviseur <<endl;
    }
    return 0;
}
