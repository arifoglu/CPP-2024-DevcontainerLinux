#include <iostream>
#include <string>

int main(){
    
    int num;
    std::cout << "Number :" ;
    std::cin >> num;
    
    // to_string()
    std::string swapping = std::to_string(num);
    std::cout << swapping <<std::endl;
    
    // change digits position
    std::string num_swapped ;
    num_swapped[0] = swapping[2];
    num_swapped[1] = swapping[1];
    num_swapped[2] = swapping[0];
    
    // from string to number
    int num2 = stoi(num_swapped);
    std::cout << num2 <<std::endl;
    
    return 0;
}
