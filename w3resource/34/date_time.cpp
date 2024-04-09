#include <iostream>
#include <ctime>

int main(){
    time_t t = time(NULL);
    tm *tPtr = localtime(&t);

    std::cout << (tPtr->tm_sec) <<std::endl;
    std::cout << (tPtr->tm_min) <<std::endl;
    std::cout << (tPtr->tm_hour) <<std::endl;
    std::cout << (tPtr->tm_mday) <<std::endl;
    std::cout << (tPtr->tm_mon) + 1 <<std::endl;
    std::cout << (tPtr->tm_year) + 1900  <<std::endl;
    std::cout << (tPtr->tm_wday) <<std::endl;
    std::cout << (tPtr->tm_yday) <<std::endl;

    std::cout << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":"<<(tPtr->tm_sec) << "--"<<(tPtr->tm_year) + 1900 <<std::endl;   



    return 0;
}