#include <iostream>
using namespace std;

int main() {
    int arry[10]{};
    int size;

    cout << "Enter how many elements (maximum 8): ";
    cin >> size;

    // checking if the size is valid
    if (size < 0 || size > 8) {
        cout << "Invalid size.\n";
        return 1;
    }



    //taking input from user
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arry[i];
    }

    //i need to cope the last 2 elements to the start of the array
    int lastElement = arry[size - 1];
    int secondLastElement = arry[size - 2];

    //shifting the elements to the right by 2 positions
    for (int i = (size-1) ; i >= 0; i--) {
        arry[i + 2] = arry[i];
    }

    // placing the last 2 elements at the start
    arry[0] = secondLastElement;
    arry[1] = lastElement;

   
    //displaying the new array after adding 2 elements at the start
    for (int i = 0; i < (size + 2); i++) {
        cout << arry[i] << endl;
    }

    return 0;
}