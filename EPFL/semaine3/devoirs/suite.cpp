#include <iostream>
using namespace std;

int main()
{
  int debut(0);
  do {
    cout << "de (>= 1) ? ";
    cin >> debut;
  } while (debut < 1);

  int fin(0);
  do {
    cout << "a (>= " << debut << ") ? ";
    cin >> fin;
  } while (fin < debut);

  /*******************************************
   * Completez le programme a partir d'ici.
   *******************************************/
  
  for(int i = debut; i <= fin ;++i){
  
    int current = i;
    int count = 0;
  
  do{
     count++;
     if(current % 3 == 0 )
     {
       current += 4;
     }
     else if(current % 3 != 0 && current % 4 == 0)
     {
       current /= 2;
     }
     else if(current % 3 != 0 && current % 4 != 0)
     {
       current -= 1;
     }
     }while(current != 0 );
     
     cout << i <<" -> "<< count <<endl;
  }
  
  /*******************************************
   * Ne rien modifier apres cette ligne.
   *******************************************/

  return 0;
}
