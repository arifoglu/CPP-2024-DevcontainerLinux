#include <iostream>
#include <string>

int main(){
    std::cout << "Type a name : ";
    std::string wrd1;
    std::cin >> wrd1;

    std::string wrd2 = "welcome";
    std::cout << wrd2.size() <<std::endl;
    std::cout << wrd2[0] <<std::endl;
    std::cout << wrd2.find("come") <<std::endl;
    std::cout << wrd2.replace(wrd2.find("come"),4,"DONE") <<std::endl;
    std::cout << wrd2.replace(wrd2.find("wel"),3,"WELL") <<std::endl;
    std::cout << wrd2.find_first_of("E") <<std::endl;
    std::cout << wrd2.find_last_of("E") <<std::endl;
    std::cout << wrd2.insert(8," ") <<std::endl;
    std::cout << wrd2.insert(9,wrd1) <<std::endl;
    std::cout << wrd2.empty() <<std::endl;




    return 0;
}