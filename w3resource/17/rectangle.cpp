#include <iostream>
#include <cmath>
using namespace std;

double area(double a ,double b){
    return a * b ;
}
double perimeter(double a ,double b){
    return (2 * (a + b ));
}
int main(){
    double side1,side2;
    cout << "Enter a side1 :" ;
    cin  >> side1 ;
    cout << "Enter a side2 :" ;
    cin  >> side2 ;
    
    cout << "Area of rectangle is :"     <<area(side1,side2) <<endl;  
    cout << "Perimeter of rectangle is :"<<perimeter(side1,side2) <<endl;  
}