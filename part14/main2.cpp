#include <iostream>
//#include <string>

class User{
    std::string status = "Gold";
    public:
         std::string first_name;
         std::string last_name;
         std::string get_status(){
        return status;
    }
    
};

int main(){
    User me;
    me.first_name ="AA";
    me.last_name = "BB";
    std::cout << "first name: " << me.first_name <<std::endl;
    std::cout << "last name: " << me.last_name <<std::endl;
    std::cout << "status: " << me.get_status() <<std::endl;
  
    return 0;
}