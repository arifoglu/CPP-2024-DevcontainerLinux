#include <iostream>
using namespace std;

void affiche(int x){
    cout << "integer: " << x <<endl;
}

void affiche(double x){
    cout << "double: " << x <<endl;
}

void affiche(int x1,int x2){
    cout << "couple: " << x1 << x2 <<endl;
}

int main(){
    affiche(1);
    affiche(1.0);
    affiche(1,1);
    return 0;
}

