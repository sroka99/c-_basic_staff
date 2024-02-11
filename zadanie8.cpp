#include <iostream>

int main(){
    int year;
    std::cout << "Year ";
    std::cin >> year;
    if(year%4==0)
    {
        std::cout << "leap year";        
    }
    else
    {
        std::cout << "no leap year";
    }
    return 0;
}