#include <iostream>
int main(){
    int age;
    std::cout<<"enter your age: ";
    std::cin >> age;
    if(age >= 100){
        std::cout<<"you are too old ";
    }
    else if(age >= 18){
        std::cout<<"welcom";
    }
    else{
        std::cout<<"you are too young";
    }
    return 0;

}