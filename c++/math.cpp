#include <iostream>
#include <cmath>

int main(){
    std::cout<<"intrer the base: ";
    double base;
    std::cin>>base;
    std::cout<<"inter the hight: ";
    double hight;
    std::cin>>hight;
    double length;
    length= sqrt(pow(base ,2)+pow(hight,2));

    std::cout<<length;

    return 0;


}