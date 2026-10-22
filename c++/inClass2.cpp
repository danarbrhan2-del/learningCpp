#include <iostream>
using namespace std;

int main() {
    
    //taking input from user for the arry and size 
    int const max=10;
    int arry[max];
    int size;
    cout<<"Enter how many elements (maximum 8):";
    cin>>size;
    if(size>8 || size <0){

        cout<<"the size must be betwen 8 and 0:";
        return 1;
    }

    //taking the first arry
    for(int i = 0;i<size;i++){
        cout<<"enter the element number "<<i+1 <<":";
        cin>>arry[i];
    }
    //asking for the new input

    int the_add_elments;
    cout<<"how many eleents do you wnat to add to the arry?";
    cin>>the_add_elments;

    //taking the new add alements
    int addelements[10];
    for(int i=0;i<the_add_elments;i++){
    cout<<"add the number you want to the the arry:";
    cin>>addelements[i];
    }

    //shifting
    int newSizeOfAryy=size+the_add_elments;
    for(int i = size;i>=0;i--){
        arry[i+the_add_elments]=arry[i];
    }

    //placing the new arry
    for(int i=0;i<the_add_elments;i++){
    arry[i]=addelements[i];
    }

    //printing
   for(int i = 0;i<newSizeOfAryy;i++){
        cout<<arry[i];
    }

    return 0;
}