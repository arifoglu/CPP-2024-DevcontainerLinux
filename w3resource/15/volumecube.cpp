#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double side_of_cube ;
    cout << "Enter a side :" ;
    cin  >> side_of_cube ;
    double volume_of_cube =  pow(side_of_cube,3);
    cout << volume_of_cube <<endl;  
}