#include <iostream>
#include <string>
#include <map>
int factorial(int x){
    if(x==1){
        return 1;
    }
    return factorial(x-1)*x;
}
int main(){
    int num;
    std::cout << "Factorial\n";
    std::cin >> num;
    std::cout << num <<"!\n";
    std::cout << factorial(num) ; 
    return 0;
}