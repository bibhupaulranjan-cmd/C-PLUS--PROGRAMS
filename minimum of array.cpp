#include <iostream>
using namespace std;
int main(){
	int A[5],n=5,i,min;
	cout<<"enter the 5 elements of array:-";
	for (i=0;i<n;i++)
	{
		cin>>A[i];
	}
	min=A[0];
	for (i=0;i<n;i++)
	if (min>A[i])
	{
		min=A[i];
	}
	cout<<"the minimum is:-"<<min;
	return 0;
}
