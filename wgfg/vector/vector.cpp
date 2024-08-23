#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> nums){
    for(int i = 0;i < nums.size();i++){
        cout << nums[i]<<" ";
    }
}

int main(){
    vector<int> data = {1,2,3,4,5,6};

    cout << data[0]<<endl;
    cout << data.size()<<endl;
    data.push_back(23);
    cout << data.size()<<endl;

    print_vector(data);
    
    return 0;
}