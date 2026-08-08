#include <iostream>
using namespace std;
int main(){
	int A[5]={1,2,3,4,5},i,sum=0;
	for (i=0;i<6;i++)
	{
		sum=sum+A[i];
	}
	cout<<"the sum is:-"<<sum;
	return 0;
}
