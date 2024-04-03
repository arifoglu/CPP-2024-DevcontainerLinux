#include <iostream>
#include <string>
using namespace std;

int main(){
    string fname = "lila";
    string lname = "mio";

    cout << "Guess firstname and lastname : " <<endl;
    string guess_fname,guess_lname;
    cin  >> guess_fname >> guess_lname ;

    if(fname == guess_fname && lname == guess_lname)
    {
        cout << "your guess totaly true\n";
    }
    else if(fname != guess_fname && lname == guess_lname)
    {
        cout << "Your guess (lastname) is true\n";
    }
    else if(fname == guess_fname && lname != guess_lname)
    {
        cout << "Your guess (firstname) is true\n";
    }
    else 
    {
        cout << "your guess totaly false\n";
    }

    return 0;
}