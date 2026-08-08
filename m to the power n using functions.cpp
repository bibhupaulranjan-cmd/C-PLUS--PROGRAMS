#include <iostream>
using namespace std;
int power(int m,int n){
int result=1;

	if (n>=0)
	{
		for (int i=0;i<n;i++)
		{
			result *=m;
		}
	}
	return result;
}
int main (){
	int a,b;
	cout<<"enter the number and power:-";
	cin>>a>>b;
	int value=power(a,b);
	cout<<value;
	return 0;
}
