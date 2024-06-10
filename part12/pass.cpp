#include <iostream>

void print_array(int &data){
    std::cout << "x is "<<data <<std::endl;
    data = 15;
    std::cout << "x is "<<data <<std::endl;
    
}

int main(){
    int x = 5;
    print_array(x);
    std::cout << x <<std::endl;
    return 0;
}