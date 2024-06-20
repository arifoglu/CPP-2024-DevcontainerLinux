#include <iostream>
using namespace std;

int main(){
    double x[4],y[4];
    int count = 0;
    cout << "Type coordinates:\n";

    while(count < 4  && cin >> x[count] >> y[count]){
        count++;
    }
    if(count == 4){
        if((x[1] - x[0]) * (x[3] -x[2]) +  (y[1] -y[0]) * (y[3] -y[2]) == 0 ){
            cout << "AB and CD are orthogonal.\n";
        }
        else{
            cout << "AB and CD are not orthogonal.\n";
        }
    }
    else {
        cout << "insufficient coordinates provided.\n";
    }
    return 0;
}