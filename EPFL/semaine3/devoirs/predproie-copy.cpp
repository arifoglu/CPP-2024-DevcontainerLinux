#include <iostream>
#include <iomanip> // pour setprecision()
using namespace std;

int main()
{
  // Réduire le format d'affichage
  cout << setprecision(4);

  // Paramètres
  double taux_croissance_lapins(0.3);
  double taux_croissance_renards(0.008);
  double taux_mortalite(0.1);
  double taux_attaque;
  int duree(50);

  double renards_i(0.0);
  double lapins_i(0.0);

  /*****************************************************
   * Compléter le code à partir d'ici
   *****************************************************/

  // ===== PARTIE 1 =====
  // Saisie des populations initiales
  do
  {
    cout << "Combien de renards au départ (>= 2) ? ";    
    cin >> renards_i;
  } while (renards_i < 2);
  do
  {
    cout << "Combien de lapins au départ  (>= 5) ? ";
    cin >> lapins_i;
  } while (lapins_i < 5);

  // ===== PARTIE 2 =====
  // Première simulation
  taux_attaque = 0.01; // Resetting taux_attaque for initial simulation
  cout << endl << "***** Le taux d'attaque vaut " << taux_attaque * 100 << "%" << endl;

  double renards = renards_i;
  double lapins = lapins_i;

  for (int mois = 1; mois <= duree; ++mois) {
    double croissance_lapins = 1.0 + taux_croissance_lapins - taux_attaque * renards;
    double croissance_renard = 1.0 + taux_attaque * lapins * taux_croissance_renards - taux_mortalite;
    lapins *= croissance_lapins;
    renards *= croissance_renard;
    cout << "Après " << mois << " mois, il y a " << lapins << " lapins et " << renards << " renards" << endl;
  }

  // ===== PARTIE 3 =====
  // Variation du taux d'attaque
  cout << endl;
  double taux_attaque_depart, taux_attaque_fin;

  do
  {
    cout << "taux d'attaque au départ en % (entre 0.5 et 6) ? ";
    cin >> taux_attaque_depart;
  } while (taux_attaque_depart < 0.5 || taux_attaque_depart > 6);
  do
  {
    cout << "taux d'attaque à la fin  en % (entre " << taux_attaque_depart << " et 6) ? ";
    cin >> taux_attaque_fin;
  } while (taux_attaque_fin < taux_attaque_depart || taux_attaque_fin > 6);

  for (double taux_attaque = taux_attaque_depart; taux_attaque <= taux_attaque_fin; taux_attaque += 0.5) {
    cout << endl << "***** Le taux d'attaque vaut " << taux_attaque << "%" << endl;

    bool renards_ext = false;
    bool renards_rec = false;
    bool lapins_ext = false;
    bool lapins_rec = false;

    renards = renards_i; // Reset des populations initiales
    lapins = lapins_i;

    for (int mois = 1; mois <= duree; ++mois) {
      double croissance_lapins = 1.0 + taux_croissance_lapins - (taux_attaque / 100) * renards;
      double croissance_renard = 1.0 + (taux_attaque / 100) * lapins * taux_croissance_renards - taux_mortalite;
      lapins *= croissance_lapins;
      renards *= croissance_renard;

      if (renards < 5 && !renards_ext) {
        cout << "Les renards ont été en voie d'extinction." << endl;
        renards_ext = true;
      }
      if (renards_ext && renards >= 5 && !renards_rec) {
        cout << "mais la population des renards est remontée ! Ouf !" << endl;
        renards_rec = true;
      }
      if (lapins < 5 && !lapins_ext) {
        cout << "Les lapins ont été en voie d'extinction." << endl;
        lapins_ext = true;
      }
      if (lapins_ext && lapins >= 5 && !lapins_rec) {
        cout << "mais la population des lapins est remontée ! Ouf !" << endl;
        lapins_rec = true;
      }
    }

    cout << "Après " << duree << " mois, il y a " << lapins << " lapins et " << renards << " renards" << endl;

    if (renards < 5) {
      cout << "et les renards ont disparu :-(" << endl;
    }
    if (lapins < 5) {
      cout << "et les lapins ont disparu :-(" << endl;
    }
    if (renards >= 5 && lapins >= 5) {
      cout << "Les lapins et les renards ont des populations stables." << endl;
    }
  }

  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
