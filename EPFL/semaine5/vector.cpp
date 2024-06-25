#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<double> v(3);

for (auto& x : v) {
  x = x + 1.1;
}

for (auto x : v) {
  cout << x << ", ";
}

    return 0;
}