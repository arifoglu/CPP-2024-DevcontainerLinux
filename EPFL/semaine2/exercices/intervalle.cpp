#include <iostream>
using namespace std;

int main(){
    double x;
    cout << "Entrez un reel : " ;
    cin  >> x;
    if(- 1.0 <= x  && x < 1.0){
        cout << "x appartient à I" <<endl;
    }else {
        cout << "x n'appartient pas à I" <<endl;
    }


    return 0;
}