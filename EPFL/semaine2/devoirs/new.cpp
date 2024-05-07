#include <iostream>

int main() {
    int lamelles, anneau, chapeau_convexe, foret;

    std::cout << "Est-ce que votre champignon a des lamelles ? (1 : oui, 0 : non) ";
    std::cin >> lamelles;

    std::cout << "Est-ce que votre champignon a un anneau ? (1 : oui, 0 : non) ";
    std::cin >> anneau;

    std::cout << "Est-ce que votre champignon vit en forêt ? (1 : oui, 0 : non) ";
    std::cin >> foret;

    if (lamelles == 0 && anneau == 0 && foret == 1) {
        std::cout << "Le champignon est un agaric jaunissant." << std::endl;
    } else if (lamelles == 0 && anneau == 1 && foret == 1) {
        std::cout << "Le champignon est un coprin chevelu." << std::endl;
    } else if (lamelles == 1 && anneau == 0) {
        std::cout << "Le champignon est un amanite tue-mouches." << std::endl;
    } else {
        std::cout << "Le champignon est une girolle." << std::endl;
    }

    return 0;
}

