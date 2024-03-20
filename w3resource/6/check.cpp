#include <iostream>
#include <climits>
using namespace std;

int main(){
    int year;
    cout << "enter a year : " ;
    cin >> year ;
    (year < INT_MAX) ? cout << "its valid" <<endl : cout << "it's not valid year" <<endl;

    return 0;
}