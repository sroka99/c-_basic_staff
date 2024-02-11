#include <iostream>
using namespace std;
#include <cmath>

int main() {
    // Values definded
    float a;
    float b;
    float c;
    float delta;
    // Input values
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
    std::cout << "Podaj c: ";
    std::cin >> c;
    // core
    delta = pow(b,2)-4*a*c;
    if(a!=0)
        {
            if (delta>0)
                {
                    cout<<"x_1 = "<<(b-sqrt(delta))/(2*a);
                    cout<<" ";
                    cout<<"x_2 = "<<(b+sqrt(delta))/(2*a);
                }
            else if (delta == 0)
                {
                    cout<<"x_0 = "<<(b)/(2*a);
                } 
            else
                {
                    printf("Function dont have a zero places ");
                }
        }
    else if(b!=0)
        {
            cout<<"x_0 = "<<-c/b;
        }
    else{
        if(c==0)
        {
            printf("Infinity zero places "); 
        }
        else
        {
            printf("Function dont have a zero places ");
        }
    }
    return 0;
}