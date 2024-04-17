#include <iostream>

int main(){
    // le tarif de fondue
    const int BASE = 4;
    double fromage = 800.0;
    double eau = 2.0;
    double ail = 2.0;
    double pain = 400.0;

    int nb_convives;
    std::cout << "Etes-vous combien de personnes? :";
    std::cin >> nb_convives;

    double nouvelle_quantite_fromage = (fromage * nb_convives) / BASE;
    double nouvelle_quantite_eau = (eau * nb_convives) / BASE;
    double nouvelle_quantite_ail = (ail * nb_convives) / BASE;
    double nouvelle_quantite_pain = (pain * nb_convives) / BASE;
    std::cout << "Pour faire une fondue ; il vous faut : " <<std::endl;
    std::cout << nouvelle_quantite_fromage << " gr fromage" <<std::endl;
    std::cout << nouvelle_quantite_eau     << " dl d'eau " <<std::endl;
    std::cout << nouvelle_quantite_ail     << " gousse d'ail " <<std::endl;
    std::cout << nouvelle_quantite_pain    << " gr de pain" <<std::endl;
    

    return 0;
}