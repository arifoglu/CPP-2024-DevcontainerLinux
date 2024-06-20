#include <iostream>
#include <cmath>
using namespace std;


double factorielle(int k);
double somme_partielle(double x,int N);
int demander_nombre(int a = 2,int b = 85);

int main(){
    int N = demander_nombre();

    double x;
    cout.precision(16);
    
    do
    {
      cout << "Entrez une valeur x pour le calcul de cos(x) : ";
      cin >> x;
      x = fmod(abs(x),2.0*M_PI);
      cout << "cos("<< x << ") ~ " << somme_partielle(x,N) <<endl;    
    } while (x != 0.0);
    return 0;
}

double factorielle(int k){
    double fact = 1.0;
    for(int i = 2;i <= k ;i++){
        fact *= i;
    }
    return fact;
}

double somme_partielle(double x,int N){
    double current_approx = 0.0;
    double powerx = 1.0;
    for(int i = 0; i <= N ; ++i){
        if(i%2 != 0 ){
            current_approx -= powerx / factorielle(2*i);
        }else{
            current_approx += powerx / factorielle(2*i);
        }
        powerx *= x*x;
    } 
    return current_approx;
};

int demander_nombre(int a,int b){
    int res;
    if(a > b){
        res = b;
        b = a ;
        a = res;
    }
    do
    {
        cout << "Entrez le degré d'approximation (entre " << a << " et " << b << " ) : ";
        cin >> res;
     } while ((res < a) or (res > b));

     return res;
}