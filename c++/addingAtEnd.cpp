#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the arry:";
    cin>>size;

    int arry[100];

    for(int i =2 ; i<size+2;i++){
        cout<<"enter the number:";
        cin>>arry[i];
    }
    arry[0]=arry[size+1];
    arry[1]=arry[size];
    for(int i = 0 ;i<size+2;i++){
        cout<<arry[i];
    }

    return 0;
}