#include <iostream>
#include <string>
using namespace std;


int main(){
    string greeting = "Hello guys";
    // find
    cout << greeting.find("guys") <<endl; // this index is 6
    // replace
    cout << greeting.replace(greeting.find("guys"),4,"kids") <<endl;
    
    string greeting2 = "what is up";
    // substr
    cout << greeting2.substr(5,2) <<endl;  // is

    // find_first_of()
    cout << greeting2.find_first_of("a") <<endl; // 2
    cout << greeting2.find_first_of("i") <<endl; // 5
    cout << greeting2.find_first_of("u") <<endl; // 8



    return 0;
}