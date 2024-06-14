#include <iostream>
using namespace std;

void  change_time(int user_input){
    int hour,minute;
    hour = user_input / 60;
    minute = user_input % 60;
    if(user_input >= 60){
     cout << user_input << " minute " << hour << "h : " << minute <<endl;
    }else {
     cout << user_input << " minute "<< minute << " minute."<<endl;
    }
}
int main(){
    int input;
    cout << "Minute : ";
    cin >> input ;
    change_time(input);
    return 0;
}