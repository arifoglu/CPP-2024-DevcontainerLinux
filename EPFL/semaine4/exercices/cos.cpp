#include <iostream>
using namespace std;

double demander_nombre(double N);

double factorielle(int k);

double somme_partielle(double x,int N);

int main(){
    factorielle();

    return 0;
}

double demander_nombre(double N){
        int N;
    do
    {
         cout << "Entre une valeur plus 0 "
         cin >> N; 
    } while (N > 0);
}

double factorielle(int k){
    int fact = 1;
    for(int i = 1;i <= k ;i++){
        fact *= i;
    }
    return fact;
}

double somme_partielle(double x,int N){
};
