#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double poids,taille,imc;
    std::cout << "Pour trouver indice de masse corporelle veuillez indiquez votre poids et taille svp" <<std::endl; 
    std::cout << "Poids : " ;
    std::cin  >> poids;
    std::cout << "Taille : " ;
    std::cin  >> taille;

    imc = poids / (pow(taille,2)) ; 

    std::cout << "Votre imc (indice de masse corporelle) : "<< std::setprecision(4) <<imc <<std::endl;
    if(imc < 18.5){
        std::cout << "Sous la normale" <<std::endl;
    }else if(imc >= 18.5 && imc <24.9){
        std::cout << "Etendue normale" <<std::endl;
    }else if(imc >= 24.9 && imc <29.9){
        std::cout << "surpoids" <<std::endl;
    }else if(imc >= 29.9 && imc <34.9){
        std::cout << "Obèse 1" <<std::endl;
    }else if(imc >= 34.9 && imc <39.9){
        std::cout << "Obèse 2 sévère" <<std::endl;
    }else if(imc >= 40){
        std::cout << "Obèse 3 morbide" <<std::endl;
    }

    return 0;
}