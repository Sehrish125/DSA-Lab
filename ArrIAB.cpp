#include <iostream>
using namespace std;

int main() {
    int size, pos;
    
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    cout << "Enter the position (0-indexed) of the element to be deleted: ";
    cin >> pos;

    if (pos < 0 || pos >= size) {
        cout << "Invalid position!" << endl;
    } else {
       
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;  
        cout << "Array after deletion:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}


