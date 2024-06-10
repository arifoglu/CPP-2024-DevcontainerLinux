#include <iostream>

void swap(int &first,int &second){
    int temp = first;
    first = second;
    second = temp;

    std::cout << "a:" << first << "\tb:" << second << std::endl;
}

int main(){
    int a = 10,b=20;
    swap(a,b);

    std::cout << "a:" << a << "\tb:" << b << std::endl;


    return 0;
}