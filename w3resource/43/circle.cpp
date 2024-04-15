#include <iostream>
#include <cmath>


double area_circle(double x){
    double areas = (M_PI * pow(x,2));
    return areas;
}
double circumference_circle(double y){
    double circumference = 2 *  M_PI * y ;
    return circumference;
}
int main(){
    double r;
    std::cout << "Enter a radius : " ;
    std::cin  >> r ;

    std::cout << "Area is : "<< area_circle(r) <<std::endl;
    std::cout << "Circumference is :  "<< circumference_circle(r) <<std::endl;


}