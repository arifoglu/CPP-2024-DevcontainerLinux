#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x;
    double resultat = 0.0;
    cout << "Entrez un reel : " ;
    cin  >> x;
    
    //Expression 1 => x / (1 - exp(x)) 
    // 1.option =>  checking x == 0 
    // 2.option => checking exp(x) == 1
    if(exp(x) == 1.0){
        cout << "Expression 1 " << "indefinie" <<endl;
    }else{
        resultat = x / (1 - exp(x));
        cout << "Expression 1 " << resultat <<endl;
    }

    //Expression 2 => x * log(x) exp(2/(x-1)) 
    // checking 
    if(x == 1.0 || x <= 0.0){
        cout << "Expression 2 " <<"indefinie" <<endl;
    }else{
        resultat = x * log(x) * exp(2/(x-1.0));
        cout << "Expression 2 " <<resultat <<endl;
    }

    //Expression 3 => (- x - sqrt(x * x - 8 * x)) / 2 - x 
    // checking 
    if(x == 2.0 || x * x - 8 * x < 0.0){
        cout << "Expression 3 " <<"indefinie" <<endl;
    }else{
        resultat = (- x - sqrt(x * x - 8 * x)) / (2.0 - x);
        cout <<"Expression 3 " << resultat <<endl;
    }

    //Expression 4 => sqrt((sin(x) - (x/20))log((x * x ) - (1.0/x)) )
    // checking 
    if(x == 0.0)
    {
        cout << "Expression 4 " <<"indefinie" <<endl;
    }
    else
    {
        resultat = (x * x ) - (1.0/x) ;
        if(resultat <= 0.0)
        {
            cout << "Expression 4 " <<"indefinie" <<endl;
        }
        else
        {
          resultat = (sin(x) - (x/20)) * log(resultat) ;
          if(resultat < 0.0)
          {
            cout << "Expression 4 " <<"indefinie" <<endl;
          }
          else
          {
            cout << "Expression 4 " << sqrt(resultat) <<endl;
          }
        }
    }
    return 0;
}