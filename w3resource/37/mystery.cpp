#include <iostream>

int main(){
    int num = 1;
    while(true){
        ++num;
        if((num%3) == 0)
        continue;
        if(num == 50)
        break;
        if((num % 2) == 0)
        {
            num += 3 ;
        }
        else
        {
            num -= 3 ;
        }

        std::cout << num << " " <<std::endl;
    }
    return 0;
}