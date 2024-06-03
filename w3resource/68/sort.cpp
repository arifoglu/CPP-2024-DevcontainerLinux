#include <iostream>
#include <array>
#include <vector>

int main(){
    int n1,n2,n3,n4,n5,n6,n7,count = 0;
    std::vector<int> numbers(7) ;
    std::cout << "Numbers :\n";
    do{
      std::cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
    }while(count == 8);
    numbers[0]= n1;
    numbers[1]= n2;
    numbers[2]= n3;
    numbers[3]= n4;
    numbers[4]= n5;
    numbers[5]= n6;
    numbers[6]= n7;
    
    std::sort(numbers.begin(),numbers.end());
    
    std::cout << numbers[6] <<std::endl;

    return 0;
}