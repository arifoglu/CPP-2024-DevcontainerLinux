#include <iostream>
#include <string>

template <typename T>
void swap(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}
//void swap(std::string &a,std::string &b){
//    std::string temp = a;
//    a = b;
//    b = temp; 
//    std::cout <<"name: "<<a <<"\tfname: " << b <<"\n";
//
//}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    std::cout <<"a: "<<a <<"\tb: " << b <<"\n";


    std::string name = "hey";
    std::string fname = "hoy";
    swap(name,fname);
    std::cout << "name: "<< name << " fname:" << fname <<std::endl;

    return 0;
}