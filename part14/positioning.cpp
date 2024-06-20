#include <iostream>

class User{};



int add_user_if_not_exists(std::vector<User> &users,User user){

}
std::ostream& operator << (std::ostream& output,User user){
    return output;
}
int main(){
    User user;
    std::cout << user <<std::endl;

    return 0;
}