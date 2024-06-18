#include <iostream>
using namespace std;

int somme(int n);

int main(){
    char rep = 'n';
    do
    {
      int n = 0;
      cout << "Entre un nombre : " ;
      cin >> n;
      cout << "Somme : " << somme(n) <<endl;
      
      do
      {
        cout << "Vouluez-vous recommencer [o/n] ? ";
        cin >> rep;
      } while ((rep != 'o' && (rep != 'n')));
      
    } while (rep == 'o');
    
    return 0;
}

int somme(int n){
    if(n <= 0)
    {
        return 0;
    }
    else 
    {
        return n + somme(n-1);
    }
}