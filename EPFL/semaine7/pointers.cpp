#include <iostream>
using namespace std;

int main(){
    double x = 5.6;
    double &y = x;
    double z = y;
    double &t = z;
    cout << "x = "<< x<<endl;
    cout << "y = "<< y <<endl;
    cout << "z = "<< z <<endl;
    cout << "t = "<< t <<endl;
    cout << "*******************"<<endl;
    x = 1.2;
    cout << "x = "<< x<<endl;
    cout << "y = "<< y <<endl;
    cout << "z = "<< z <<endl;
    cout << "t = "<< t <<endl;
    cout << "*******************"<<endl;
    y = 2.3;
    cout << "x = "<< x<<endl;
    cout << "y = "<< y <<endl;
    cout << "z = "<< z <<endl;
    cout << "t = "<< t <<endl;
    cout << "*******************"<<endl;
    t = 3.4;
    cout << "x = "<< x<<endl;
    cout << "y = "<< y <<endl;
    cout << "z = "<< z <<endl;
    cout << "t = "<< t <<endl;
    return 0;
}