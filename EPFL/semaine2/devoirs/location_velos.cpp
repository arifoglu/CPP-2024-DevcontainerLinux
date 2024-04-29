#include <iostream>
using namespace std;

int main()
{
  cout << "Donnez l'heure de début de la location (un entier) : ";
  int debut;
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin;
  cin >> fin;

  /*****************************************************
   * Compléter le code à partir d'ici
   *****************************************************/
  int price1 = 1; 
  int price2 = 2; 
  int total = 0;
  int dure_1fr = 0;
  int dure_2fr = 0;

  if( (0 < fin && fin <= 24) && ( 0 <= debut && debut < 24))
  {
     if(debut > fin )
     {
        cout << "Bizarre, le début de la location est après la fin ..." << endl;
     }
     else if(debut == fin){
        cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;
     }
     else
     {
      
      if((0 <= debut && debut <= 7 && fin <= 7) || (17 < debut && debut <= 24 &&  17 < fin && fin <= 24 ))
      {
         total = (fin - debut ) * price1;
         dure_1fr = fin - debut ;
         cout << "Vous avez loué votre vélo pendant" << endl;
         cout << dure_1fr <<" heure(s) au tarif horaire de " << "1 franc(s)" << endl;
         cout << "Le montant total à payer est de " << total <<" franc(s)." << endl; 
      }
      else if(0 <= debut && debut <= 7 &&  7 < fin && fin <= 17)
      {
         total = abs(debut - 7) * price1 + (fin - 7) * price2; 
         dure_1fr = abs(debut - 7);
         dure_2fr = abs(fin - 7);
         cout << "Vous avez loué votre vélo pendant" << endl;
         cout << dure_1fr<<" heure(s) au tarif horaire de " << "1 franc(s)" << endl;
         cout << dure_2fr<<" heure(s) au tarif horaire de " << "2 franc(s)" << endl;
         cout << "Le montant total à payer est de " << total <<" franc(s)." << endl; 
      }
      else if(0 <= debut && debut <= 7 &&  17 < fin && fin <= 24)
      {
         total = abs(debut - 7) * price1 + 20 + (fin - 17) * price1 ;
         dure_1fr = abs(debut - 7) + abs(fin - 17); 
         dure_2fr = 10;
         cout << "Vous avez loué votre vélo pendant" << endl;
         cout << dure_1fr <<" heure(s) au tarif horaire de " << "1 franc(s)" << endl;
         cout << dure_2fr<<" heure(s) au tarif horaire de " << "2 franc(s)" << endl;
         cout << "Le montant total à payer est de " << total <<" franc(s)." << endl; 
      }
      else if(7 <= debut && debut <= 17 &&  7 < fin && fin <= 17)
      {
         total = (fin - debut) * price2 ; 
         dure_2fr = abs(fin - debut); 
         cout << "Vous avez loué votre vélo pendant" << endl;
         cout << dure_2fr<<" heure(s) au tarif horaire de " << "2 franc(s)" << endl;
         cout << "Le montant total à payer est de " << total <<" franc(s)." << endl; 
      }
      else if(7 <= debut && debut <= 17 &&  17 < fin && fin <= 24)
      {
         total = abs(debut - 17) * price2 + (fin - 17) * price1;
         dure_1fr = abs(fin - 17);
         dure_2fr = abs(debut - 17); 
         cout << "Vous avez loué votre vélo pendant" << endl;
         cout << dure_1fr<<" heure(s) au tarif horaire de " << "1 franc(s)" << endl;
         cout << dure_2fr<<" heure(s) au tarif horaire de " << "2 franc(s)" << endl;
         cout << "Le montant total à payer est de " << total <<" franc(s)." << endl; 
      }

     }
  }
  else if( debut >= 24 || debut < 0 || fin > 24  || fin < 0)
  {
     cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;
  }

  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
