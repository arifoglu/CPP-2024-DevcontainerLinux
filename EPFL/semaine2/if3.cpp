#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number from 1 to 10 to evaluate our service :" ;
    cin  >> n ;
    (n >= 1 and n <= 10) ? cout << "evaluation is correct" : cout << "evaluation is not correct" <<endl;
    // (n >= 1 && n <= 10) ? cout << "evaluation is correct" : cout << "evaluation is not correct" <<endl;

    return 0;
}