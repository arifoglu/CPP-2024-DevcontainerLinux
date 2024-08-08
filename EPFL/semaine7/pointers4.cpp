#include <iostream>
using namespace std;

int main(){
    int* px = nullptr;
    //px = new int();

    if(px != nullptr)
    {
        cout << px << " " << *px <<endl;
    }
    else 
    {
        cout << "nullpart" <<endl;
    }   
    return 0;
}