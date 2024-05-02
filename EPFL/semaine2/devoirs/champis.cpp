#include <iostream>
using namespace std;

int main(){
    int lamelles,anneau,chapeau_convexe,foret;
    cout << "Pensez à un champignon : amanite tue-mouches, pied bleu, girolle," << endl
       << "cèpe de Bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;
    
    cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
    cin >> chapeau_convexe;
    if(chapeau_convexe)
    {
      cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
      cin >> foret;

       if(foret)
       {
       cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";
       cin >> anneau ;

          if(anneau)
            {
              cout << "==> Le champignon auquel vous pensez est  l'amanite tue-mouches.\n"; 
            }
            else if(!anneau)
            {
              cout << "==> Le champignon auquel vous pensez est  le pied bleu.\n";
            }
          }
          else if(!foret)
          {
              cout << "==> Le champignon auquel vous pensez est  l'agaric jaunissant.\n";
          }
    }
    else if (!chapeau_convexe)
    {
      cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
      cin >> foret;

        if(foret)
        {
           cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
           cin >> lamelles;

             if(lamelles)
             {
              cout << "==> Le champignon auquel vous pensez est  la girolle.\n";
             } 
             else if(!lamelles)
             {
                cout << "==> Le champignon auquel vous pensez est le cèpe de Bordeaux.\n";
             }
        }
        else if(!foret)
        {
         cout << "==> Le champignon auquel vous pensez est  le coprin chevelu.\n";
        }
    }
    return 0;
}


     


