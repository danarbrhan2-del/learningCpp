#include <iostream>

int main () {

    int age;

    //in c++ you cant get the name, you have to use that code std::getline(std::cin,name);
    std::string name;
    std::cout<<"what is your name? ";
    std::getline(std::cin,name);
    //std::cin>>name;
    

    std::cout<<"how old are you? ";
    std::cin>>age;
    std::cout<<"hello "<<name << " you are "<< age <<" old";

    return 0;
}