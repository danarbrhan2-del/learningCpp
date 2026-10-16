#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[6] ={"danar" ,"mani" ,"zhear" , "karzan","rebin","zhear Raqam2"};

    int size = sizeof(names)/sizeof(names[0]);
    for(int i=0;i<size;i++){

    cout<<names[i]<<endl;
    }
    return 0;
}