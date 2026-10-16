#include <iostream>
using namespace std;
int main(){

    int size;
    cout << "entre the size of the arry(it must be less that 10:";
    cin>> size;
    if (size >10){
        cout<<"the number must be less than 10";
    }

    int arry[10];

    for(int i =0; i<size-2;i++){
        cout<<"enter number :";
        cin>>arry[i];
    }
    arry[size-2]=arry[0];
    arry[size-1]=arry[1];
    for (int i = 0; i < size; i++)
    {
       cout <<arry[i];
    }
    

    return 0;
}