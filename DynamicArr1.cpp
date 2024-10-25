#include<iostream>
using namespace std;
int main ()
{	int n,x,i;
	cout<<"Enter the size of array : ";
	cin>>n;
	int *arr = new int[n];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	for (int i=0; i<n; i++){
		cout<<arr[i];
	}
    cout<<"\nEnter the index no";
    cin>>i;
    cout<<"\nEnter the new element";
    cin>>x;
	{
	arr[i]=x;
	}
    for (i=0; i<n; i++){
   cout<<arr[i]<<endl;
   } 
	
	delete [] arr;
	return 0;
}
