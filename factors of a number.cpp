#include <iostream>
using namespace std;
int main(){
	int a,i;
	cout<<"enter the number to find its factor:-";
	cin>>a;
	for (i=1;i<=a;i++)
	{
		if (a%i==0)
		{
		cout<<i<<endl;	
		}
}
	return 0;
}
