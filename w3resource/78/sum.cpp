#include <iostream>
#include <string>
#include <sstream>  // Include this for stringstream

using namespace std;

int main() {
    string str;
    int sum = 0, num;
    std::cout << "Type a phrase with numbers " <<std::endl;
    // Read input line by line
    while (getline(cin, str)) {
        if(str == "q") break;
        // Convert all non-digit characters to spaces
        for (int i = 0; i < (int)str.size(); i++) {
            if (!isdigit(str[i])) {
                str[i] = ' ';
            }
        }

        // Use stringstream to extract numbers from the modified string
        stringstream abc(str);

        // Extract and sum up all integers
        while (abc >> num) {
            sum += num;
        }
        
    }

    cout << "Sum of all numbers: " << sum << endl;
    return 0;
}
