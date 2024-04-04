#include <iostream>
using namespace std;

int main(){
    enum seasons{summer , fall , winter , spring };
    seasons now = summer;

    switch (now)
    {
    case summer:
        cout << "this is good season" <<endl;
        break;
    case fall:
        cout << "this is normal season" <<endl;
        break;
    case winter:
        cout << "this is cold season" <<endl;
        break;        
    case spring:
        cout << "this is best season" <<endl;
        break;        
    default:
        break;
    }


    return 0;
}