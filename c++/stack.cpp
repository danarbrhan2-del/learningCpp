#include <iostream>
using namespace std;
int main(){
 
    int size = 10;
    int arry[size];
    int top = -1;

   // push
    do {
        cout<<"enter number :";

        //if it was full
        if (top >= size - 1) {
            cout << "Stack overflow. Cannot add more elements." << endl;
            break;
        }
        top++;
        cin>>arry[top];
    }while (top < size);

    //pop
    do{
        cout<<"pop number :";
        arry[top] = 0;
        if (top < 0) {
            cout << "Stack underflow. Cannot remove elements." << endl;
            break;
        }
        top--;
    }while(top > -1);

    //display
    cout << "Elements in the stack: ";
    for (int i = 0; i <= top; i++) {
        cout << arry[i] << " ";
    }
}
