#include <iostream>
using namespace std;

int main(){
    //I = [2,3[ U ]0,1] U [-10,-2]
    // (2 <= x  && x < 3)  || ( 0 < x  && x< = 1 ) || (-10 <= x && x <= - 2)  
    double x;
    cout << "Entrez un reel : " ;
    cin  >> x;
    if((2 <= x  && x < 3)  || ( 0 < x  && x <= 1 ) || (-10 <= x && x <= - 2))
    {
        cout << "x appartient à I" <<endl;
    }
    else 
    {
        cout << "x n'appartient pas à I" <<endl;
    }

    return 0;
}