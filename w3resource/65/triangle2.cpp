#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    //vector style
    std::vector<int> sides(3);
    
    std::cin >> sides[0] >> sides[1] >> sides[2] ;

    std::sort(sides.begin(),sides.end());

    if(sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2]  ){
        std::cout << "This is a right angle.\n ";
    } else {
        std::cout << "This is not a right angle.\n";
    }
    return 0;
}