#include <iostream>
#include <iomanip>

// we have to define a this fuunction as double.
double km_to_mile(double datas_km){
    double miles;
    miles = datas_km * 0.621371192;
    return miles; 
}
double mile_to_km(double datas_mile){
    double kilometers ;
    kilometers = datas_mile / 0.621371192;
    return kilometers; 
}
int main(){
    double km,mile;
 
    int km_mile = 0; 
    int mile_km = 1;
    int choice;

    std::cout << "What do you want?\n(0)km to mile\n(1)mile to km\n" ;
    std::cin >> choice ;

    switch (choice)
    {
    case 0 : 
        std::cout << "Enter a length : " ;
        std::cin >> km;
        std::cout << km << " km = " << std::setprecision(4)<<km_to_mile(km) << " mile" <<std::endl;
        break;
    case 1 :
        std::cout << "Enter a length : " ;
        std::cin >> mile;
        std::cout << mile << " mile = " <<std::setprecision(4)<<mile_to_km(mile) << " km" <<std::endl;
        break;   
    default:
        std::cout << "Next time "<<std::endl;
        break;
    } 

    return 0;
}

