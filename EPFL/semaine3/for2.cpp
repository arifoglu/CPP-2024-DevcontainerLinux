#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main(){
    double note,total=0.0,moyen;
    for(double i = 1 ;i < 5 ;i++){
        cout << "enter note " << i  << " : ";
        cin  >> note ;
        total += note;
        moyen = total / 4;  
    }
    cout << "moyen is : " << std::setprecision(2) <<moyen <<endl; 

}