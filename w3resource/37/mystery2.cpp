#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverseNum(int x){
    string s = to_string(x);
    reverse(s.begin(),s.end()); 
    stringstream ss(s);
    int rev = 0;
    ss >> rev;
    return rev;
}
bool isMysteryNumber(int n){
    for(int i = 1 ; i <= n/2 ;i++){
        int j = reverseNum(i);
        if(i + j == n ){
            cout << n << " is mystery " <<i << " " << j <<"\n";
            return true;
        }
    }
    cout << "Not a mystery number \n" ;

    return false ;
}


int main(){
    //std::cout << reverseNum(12) <<std::endl;
    
    int n;
    cout << "Enter a number :" ;
    cin  >> n;
    isMysteryNumber(n);

    return 0;
}