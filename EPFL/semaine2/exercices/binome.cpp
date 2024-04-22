#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c = 0.0;

    cout << "Entrez un valeur non nulle pour a: " ;
    cin  >> a;
    if(a == 0.0){
        cerr << "Erreur : a est nul " <<endl;
    }
    cout << "Entrez une valeur pour b :";
    cin  >> b;
    cout << "Entrez une valeur pour c :";
    cin  >> c;

    double delta = (b * b) - (4.0 * a * c);

    if(delta < 0.0){
        cout << "Pas de solution reelles." <<endl;
    }else if(delta > 0.0){
        cout << "Deux solution :" << (-b - sqrt(delta)) / (2.0 * a) << " et " << ( -b + sqrt(delta)) /  (2.0 * a) <<endl;
    }else {
        cout << "une solution unique . " << -b / (2.0 * a) <<endl;
    }
    return 0;
}