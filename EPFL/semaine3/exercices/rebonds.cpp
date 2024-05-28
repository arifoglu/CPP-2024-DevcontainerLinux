#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    const double g = 9.81;
    double H0,eps,NBR ;
    cout << "Entrez la hauteur initiale( H0 > O) : " <<endl;
    cin >> H0 ;
    cout << "Entrez coefficient de rebonds( 0 <= eps  1) : " <<endl;
    cin >> eps ;
    cout << "Entrez le nombre de rebonds( nbr > O) : " <<endl;
    cin >> NBR ;
    
    double V = sqrt(2 * H0 * g);
    double V1 = eps * V ;
    double H1 = pow(V1,2)/ 2 * g; 
    cout << "V = " << V << endl;
    cout << "V1 = " << V1 << endl;
    cout << "H1 = " << H1 << endl;
    
    return 0;
}