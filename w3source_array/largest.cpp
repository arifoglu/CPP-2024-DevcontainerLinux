#include <iostream>
#include <array>
#include <string>
using namespace std;

int main(){
    array<int,3> ages = {4,56,76};
    sort(begin(ages),end(ages));    
    for(int i = 0;i < ages.size();i++){
        if(i == (ages.size() - 1))
        cout << ages[ages.size() - 1 ]<<endl;
    }
    return 0;
}