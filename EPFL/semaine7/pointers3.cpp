#include <iostream>
using namespace std;

int main(){
    int i = 3;
    int& id = i;

    cout << "i is "<< i <<endl;
    cout << "i's address  "<< &i <<endl;
    cout << "id is "<< id <<endl;
    cout << "id's address is "<< &id <<endl;

    return 0;
}