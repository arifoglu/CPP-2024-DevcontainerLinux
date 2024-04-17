#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double poids,taille,imc;
    
    std::cout << "Poids : " ;
    std::cin  >> poids;
    std::cout << "Taille : " ;
    std::cin  >> taille;

    imc = poids / (pow(taille,2)) ; 

    std::cout << "Votre imc (indice de masse corporelle) : "<< std::setprecision(4) <<imc <<std::endl;


    return 0;
}