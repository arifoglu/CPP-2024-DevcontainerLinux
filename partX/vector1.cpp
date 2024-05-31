#include <iostream>
#include <vector>

int main(){
    int x;
    std::vector<int> nums = {1,2,3};
    std::cout << "size is "<<nums.size()<<std::endl;
    //nums.push_back(4);
    //std::cout << "size is "<< nums.size()<<std::endl;
    while(true){
      std::cout << "Enter a number :\n";
      std::cin >> x;
      nums.push_back(x);
      std::cout << "size is "<< nums.size()<<std::endl;
    }
    return 0;
}