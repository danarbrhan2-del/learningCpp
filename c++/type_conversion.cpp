#include <iostream>

int main(){
    int x =5;
    int y = 10;

    double result = x / y;
    std::cout<<result ;

    double result2 =  x / (double)y;
    std::cout<<result2 ;

    return 0;
}