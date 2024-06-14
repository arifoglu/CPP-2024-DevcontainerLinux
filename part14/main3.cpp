#include <iostream>
#include <vector>

class User{
    std::string status = "Gold";
    public:
         std::string first_name;
         std::string last_name;
         std::string get_status(){
        return status;
    }
    
};
int add_user_if_not_exist(std::vector<User> &users,User user){
    for(int i = 0; i < users.size();i++){
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name ){
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}



int main(){
    std::vector<User> users;
    User user1,user2,user3;

    user1.first_name = "ASA";
    user1.last_name = "BEY";

    user2.first_name = "WER";
    user2.last_name = "TRF";

    user3.first_name = "ZTR";
    user3.last_name = "QWE";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name = "WERR";
    user.last_name = "TRE";

    std::cout << add_user_if_not_exist(users,user)<<std::endl;
    return 0;
}