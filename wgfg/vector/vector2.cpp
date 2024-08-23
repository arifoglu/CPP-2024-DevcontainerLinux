#include <iostream>
#include <vector>
using namespace std;

void prints(vector<int> nums,int inputs){
    nums.push_back(inputs);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
    cout << endl;
    
}

int main(){
    vector<int> data = {10,20,30};
    int x;

    do
    {
        cout << "Enter a number : ";
        cin >> x;
        prints(data,x);
    } while (x < 10);
    
    return 0;
}