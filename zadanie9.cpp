#include <iostream>
#include <math.h>
#include <stdexcept>

int main(){
    float height;
    float radius;
    std::cout<<"Height: ";
    std::cin >>height;
    std::cout<<"Radius: ";
    std::cin >>radius;
    if (radius<0||height<0)
    {
        throw std::invalid_argument("AddPositiveIntegers arguments must be positive");
    } 
    std::cout<<"Volume "<<height*pow(radius,2)*M_PI;
    return 0;
}