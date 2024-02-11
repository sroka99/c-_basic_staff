#include <iostream>
#include <random>

int main() {
    int randomNumber;
    int number;
    int i =0;
    randomNumber =rand()%10; 
    while (i==0)
        {
            std::cout << "Your Number:";
            std::cin >> number;

            if(number==randomNumber)
                {
                    std::cout << "Congrats ";
                    i++;
                }
            else
                {
                    std::cout << "Try again ";
                }
        }
    return 0;
}