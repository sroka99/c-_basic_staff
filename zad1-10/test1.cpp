#include <iostream>

int main() {
    std::cout << "BMI Calculator ";
    // Values definded
    int weight;
    int height;
    int bmi_value;
    // 
    std::cout << "Weight: ";
    std::cin >> weight;
    std::cout << "Height: ";
    std::cin >> height;
    bmi_value = weight/pow(height,2);
    // IF statement 
    if (bmi_value<10){
        printf("BMI");
    }
    else if (bmi_value>=20 & bmi_value < 40)
    {
        printf("xddddd");
    }
    else
    {
        printf("xd");
    }
    return 0;
}