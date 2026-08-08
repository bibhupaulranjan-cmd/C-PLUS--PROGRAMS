#include <iostream>
using namespace std;
int main(){
	int A[3]={5,10,2},i,max;
	max=A[0];
	for(i=0;i<3;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
			cout<<"max is:-"<<max;
		}

	}
	return 0;
}
