#include <iostream>
using namespace std;

int main(){
    
    for(int j = 1;j <= 9;j++){
        for(int i = 1;i <= (9-j);i++){
            cout << " ";
        }
        for(int i = 1; i <= j ;i++){
            cout << i ;
        }
        cout <<endl;
    }
    cout <<endl;
    return 0;
}