#include <iostream>
#include <vector>

// if we define into the functions variable with & ,we can use and add new datas directly to our vectors.
void print_array(std::vector<int> &datas){
    
    datas.push_back(12);
    for(int i = 0 ;i < datas.size() ; i++){
      std::cout << datas[i] << " ";
    };
    std::cout << std::endl;
}

int main(){
    std::vector<int> data = {1,2,3};

    print_array(data);
    
    print_array(data);
    print_array(data);
    print_array(data);
    print_array(data);
    return 0;
}