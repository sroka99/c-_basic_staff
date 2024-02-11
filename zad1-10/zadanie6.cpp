#include <iostream>
#include <string>

int main(){
    char symbol;
    float a;
    float b;
    std::cout << "Input symbol:";
    std::cin >> symbol;
    std::cout << "Input value_1:";
    std::cin >> a;
    std::cout << "Input value_2:";
    std::cin >> b;

    if (symbol=='+')
        {
            std::cout << a+b;
        }
    else if (symbol =='-')
        {
            std::cout << a-b;
        }
            
    else if (symbol =='*')
        {
            std::cout << a*b;
        }    
    else if (symbol =='/')
        {
            if(b==0)
                {
                std::cout<<"incorrect values";
                goto jmp;
                }
            std::cout << a/b;
            jmp:
        }
    
    return 0;
}