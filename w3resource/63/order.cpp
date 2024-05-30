#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;

    cout << "Enter the numbers :\n";
    int n;
    while(cin >> n){
        nums.push_back(n);
           if(nums.size() % 5 == 0){
               cout << "If you want to quit type a 'q'\n";
           };
    };
    sort(nums.rbegin(),nums.rend());
    
    cout << "From highest number to smallest one : "<<endl;
    for(int i = 0; i !=3 ; ++i){
        cout << nums[i] <<endl;
    }
    return 0 ;
}