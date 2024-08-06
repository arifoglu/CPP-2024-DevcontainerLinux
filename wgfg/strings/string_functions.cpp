#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    // length
    string str1 = "daily";
    cout << "str1's length is = "<<str1.length() <<endl;

    // swap
    string a = "alien";
    string b = "human";
    cout << "a is " << a <<endl;
    cout << "b is " << b <<endl;
    swap(a,b);
    cout << "swapping!!!"<<endl;
    cout << "a is " << a <<endl;
    cout << "b is " << b <<endl;

    // size
    string str2 = "daily";
    cout << "str2's size is "<<str2.size()<<endl;

    // resize 
    string str3 = "daily";
    str3.resize(3);
    cout << "str3 is " << str3<<endl;
    cout << "str3's new size is " << str3.size()<<endl;

    // find 
    string str4 = "daily news are one the web";
    cout << "'are' is located " << str4.find("are")<<endl; 

    // push_back
    string str5 = "daily news are one the web";
    str5.push_back('.');
    cout << "str5 is "<< str5 <<endl;

    // pop_back
    string str6 = "daily news are one the web!";
    str6.pop_back();
    cout << "str6 is "<< str6 <<endl;

    // clear
    string str7 = "daily";
    str7.clear();
    cout << "str7 is clear"<< str7<<endl;
    
    // strcat()
    char stra[50] = "hello";
    char strb[] = "world";
    strcat(stra,strb);
    cout << stra <<endl;

    // replace
    string str8 = "daily";
    str8.replace(0,5," ");
    cout << "str8 is "<< str8 <<endl;

    // example
    string strX = "hello";
    strX.replace(0,strX.length(),"X");
    cout << "strX is "<< strX <<endl;

    // substr
    string str9 = "daily";
    cout << str9.substr(0,2)<<endl;
    
    // erase
    string str10 = "daily";
    str10.erase(3,1);
    cout << str10 << endl;    
    return 0;
}