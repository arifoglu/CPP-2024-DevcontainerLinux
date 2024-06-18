#include <iostream>
using namespace std;

double moyen(double num1,double num2);

int main(){
    double note1,note2;
    cout << "Entre deux notes svp:\n";
    cin >> note1 >> note2;
    moyen(note1,note2);

    return 0;
}

double moyen(double num1,double num2){
    double moyen = (num1 + num2) / 2.0 ;
    cout << "Moyen : "<< moyen <<endl;
    return 0;
}