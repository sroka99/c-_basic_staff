#include <iostream>
int fibbonaci(int x)
{
    if(x==1||x==2){
        return 1;
    }
    return fibbonaci(x-1)+fibbonaci(x-2); 
}
int main(){
    int value;
    std::cin >> value;
    std::cout << fibbonaci(value);
    return 0;
}