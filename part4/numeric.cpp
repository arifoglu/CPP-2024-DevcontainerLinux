#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << fmax(10,3) <<endl;   // max value =>10                
    cout << fmin(10,3) <<endl;   // min vlaue => 3
    cout << fdim(8.0,3.0) <<endl;// positive difference => 5
    cout << abs(-314) <<endl;    //absolute value =>314 
    cout << pow(3,3) <<endl;     // exponent of value => 27
    cout << sqrt(16) <<endl;     // square root => 4
    cout << cbrt(27.0) <<endl;   // cubic root =>3
    cout << hypot(3,4) <<endl;   // hipotenus => 5
    cout << fmod(19,4) <<endl;   // like modulus 
    cout << nearbyint(2.3) <<endl;// near by integer =>2
    cout << nearbyint(2.6) <<endl;// near by integer =>3
    
    
    return 0;
}