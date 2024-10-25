#include<iostream>;
using namespace std;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main ()
{   int n = 5;
    int a[5] = {1,2,3,4,5};
	int *ptr = a;
	for(int i=0; i<n; i++){
    cout<<*ptr<<endl;
   ptr++;
}
	return 0;           
}
