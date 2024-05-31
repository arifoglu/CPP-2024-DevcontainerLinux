#include <iostream>
#include <array>
#include <algorithm>

int main(){
    std::array<int,3> sides;
    
    std::cin >> sides[0] >> sides[1] >> sides[2] ;

    std::sort(sides.begin(),sides.end());

    if(sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2]  ){
        std::cout << "This is a right angle.\n ";
    } else {
        std::cout << "This is not a right angle.";
    }
    return 0;
}