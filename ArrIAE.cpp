#include <iostream>;
#include <string>;
using namespace std;
int search(int arr[], int n, int x){
	for (int i=0; i<n; i++)
		if (arr[i]==x)
		return i;
		return -1;
	
}
int main ()
{
 int arr[] = { 2, 3, 4, 10, 40 };
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
	return 0;
 }

