#include <iostream>
using namespace std;

int sum(int x ,int y){
    return x + y ;
}
int subs(int x, int y){
    return x - y ;
}
int multiply(int x,int y){
    return x * y ;
}
int divide(int x, int y){
    return x / y ;
}
// double
double sum2(double x ,double y){
    return x + y ;
}
double subs2(double x, double y){
    return x - y ;
}
double multiply2(double x,double y){
    return x * y ;
}
double divide2(double x, double y){
    return x / y ;
}

int main(){
    int a,b; 
    cout << "Enter two integer :" <<endl;
    cin  >> a >> b ;
    // addition
    cout << a << "+" << b << "=" << sum(a,b) <<endl;
    // substraction
    cout << a << "-" << b << "=" << subs(a,b) <<endl;
    // multiply
    cout << a << "*" << b << "=" << multiply(a,b) <<endl;
    // divide
    cout << a << "/" << b << "=" << divide(a,b) <<endl;
    //
    //double
    double c,d; 
    cout << "Enter two number(double) :" <<endl;
    cin  >> c >> d ;
    // addition
    cout << c << "+" << d << "=" << sum2(c,d) <<endl;
    // substraction
    cout << c << "-" << d << "=" << subs2(c,d) <<endl;
    // multiply
    cout << c << "*" << d << "=" << multiply2(c,d) <<endl;
    //divide 
    cout << c << "/" << d << "=" << divide2(c,d) <<endl;
    


    return 0;
}