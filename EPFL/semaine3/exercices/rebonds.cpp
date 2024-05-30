#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    const double g = 9.81;
    double h0,eps,n ;

    do{
        cout << "Hauteur initiale (h0 > 0) : ";
        cin >> h0;  
    }while(h0 <= 0.0);

    do{
        cout << "Coefficient de rebond (0 <= coeff < 1 ) : ";
        cin >> eps;
    }while((eps < 0.0) | (eps >= 1.0));

    do{
        cout << "Nombre de rebonds (n >= 0) : ";
        cin >> n;
    }while(n < 0);
    
    double h1,v0,v1;

    for(int rebonds = 1; rebonds <= n ;++rebonds){
        v0 = sqrt(2 * h0 * g);
        v1 = eps * v0;
        h1 = pow(v1,2) / (2.0 * g);
        
        h0 = h1;

        cout << "Au " << rebonds << "e rebond ,la hauteur atteinte de " << h0 <<endl;
    }
   
    return 0;
}