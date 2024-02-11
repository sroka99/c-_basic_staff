#include <iostream>
#include <string>

int main(){
    std::string login;
    std::string password;
    std::string rel_log = "admin";
    std::string rel_pass = "pass";
    jmp:
    std::cout<<"Login: \n";
    std::cout<<"Password: \n";
    std::cin >> login;
    std::cin >> password;
    if((rel_log == login)&&(rel_pass == password)){
        std::cout<<"Logged\n";
    }
    std::cout<<"Incorrect: \n";
    goto jmp;
    return 0;
}