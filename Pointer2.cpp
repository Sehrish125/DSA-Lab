#include<iostream>;
using namespace std;
int main ()
{   int n;
    int var[n];
	int *ptr;
	ptr = var;
	cout<<"Enter the size of Array.";
	cin>>n;
	cout<<"Enter the Elements.";{
	for (int i=0; i<n; i++)
	cin>>var[i];
   }
	cout<<"1st Element = "<<*ptr<<endl;
	cout<<"Last Element = "<<*ptr+2<<endl;
	
	return 0;           
}
