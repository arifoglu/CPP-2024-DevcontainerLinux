#include <iostream>
#include <ctime>

int main(){
    time_t t = time(NULL);
    tm *tPtr = localtime(&t);

    int year = (tPtr->tm_year) + 1900 ;
    std::cout << year <<std::endl;

    int votre_age ,annee;

    std::cout << "Entré votre âge : " ;
    std::cin  >> votre_age;
    
    int naissance = year - votre_age ;

    std::cout << "Votre date de naissance : "  << naissance <<std::endl;
    



    return 0 ;
}