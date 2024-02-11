#include <iostream>

int main(){
    float value_1;
    float value_2;
    char symbol;
    std::cout << "Symbol: "; 
    std::cin >> symbol;
    std::cout << "Value_1: "; 
    std::cin >> value_1;
    std::cout << "Value_2: "; 
    std::cin >> value_2;
    switch(symbol)
        {
            case '+':
                std::cout << value_1+value_2;
                break;
            case '-':
                std::cout << value_1-value_2;
                break;
            case '*':
                std::cout << value_1*value_2;
                break;
            case '/':
                if(value_2 == 0)
                    {  
                        std::cout << "Incorrect value";
                        goto jmp;
                    }
                std::cout << value_1/value_2;
                jmp:
                break;
            default:
                std::cout << "Incorrect symbol" << symbol;
                break;
        }
    return 0; 
}