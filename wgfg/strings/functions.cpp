#include <iostream>
#include <string>
using namespace std;

void print_string(string idea){
    cout << "User's idea is : " << idea <<endl;
    return ;
}
void print_string2(string idea2){
    cout << "Editors idea is : " << idea2 <<endl;
    return ;
}
int main(){
    string s = "Daily news are not important for kids.";
    print_string(s);

    string str;
    cout << "Editor's idea : " ;
    getline(cin,str);
    print_string2(str);
    return 0;
}