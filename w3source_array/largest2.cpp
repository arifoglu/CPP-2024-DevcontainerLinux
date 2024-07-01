#include <iostream>
#include <array>
#include <string>
using namespace std;

void largest(int arr[],int array_size,int input_choice){
    sort(arr,arr+array_size,greater<int>());
    for(int i = 0; i < input_choice;i++){
        cout << arr[i]<< "\t";
    }
}

int main(){
    int nums[] = {4,56,76,54,87,98,109,22,23,890};
    int nums_size = sizeof(nums) / sizeof(nums[0]);
    cout << "array size is : " <<nums_size <<endl;
    for(int i = 0;i < nums_size;i++){
        cout << nums[i]<<"\t";
    }
    cout <<endl;
    int choice;
    cout << "How many the largest numbers do you show ?";
    cin >> choice;
    largest(nums,nums_size,choice);
    return 0;
}