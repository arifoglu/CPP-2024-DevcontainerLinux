#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    const double g = 9.81;
    double h0,eps,h_fin ;

    do{
        cout << "Hauteur initiale (h0 > 0) : ";
        cin >> h0;  
    }while(h0 <= 0.0);

    do{
        cout << "Coefficient de rebond (0 <= coeff < 1 ) : ";
        cin >> eps;
    }while((eps < 0.0) | (eps >= 1.0));

    do{
        cout << "Hauteur finale désire (h_fin >= 0) : ";
        cin >> h_fin;
    }while(h_fin <= 0 | h_fin >= h0 );
    
    double h1,v0,v1;
    int rebonds = 0;
    
    do{
        ++rebonds;
        v0 = sqrt(2 * h0 * g);
        v1 = eps * v0;
        h1 = pow(v1,2) / (2.0 * g);
        h0 = h1;
               
        }while(h0 > h_fin);
        cout << "Rebonds " << rebonds <<" fois " <<endl;

    return 0;
}