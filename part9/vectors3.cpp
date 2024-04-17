#include <iostream>
#include <vector>

void print_array(std::vector<int> &datas,int inputs){
   
    datas.push_back(inputs);
    for(int i = 0 ;i < datas.size() ; i++){
      std::cout << datas[i] << " ";
    };
    std::cout << std::endl;
}

int main(){
    std::vector<int> data = {1,2,3};
    int x;
    
    do{
      std::cout << "Enter a number : " ;
      std::cin >> x ;
      print_array(data,x);
    }while(x < 10);

    return 0;
}