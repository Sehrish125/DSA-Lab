#include <iostream>
using namespace std;

int main() {
    int n = 10, element,i;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n>10){
    cout << "Array out of size.\n";
    return 1;
	}
    int arr[n];
    cout << "Enter the elements of the array : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to insert : ";
    cin >> element;
    cout <<"Enter the index :";
    cin >>i;
     for(int j = n; j > i; j--) {
        arr[j] = arr[j-1];
    }
    
    arr[i] = element;
	
    cout << "Array after insertion: ";
    for(int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
	}

