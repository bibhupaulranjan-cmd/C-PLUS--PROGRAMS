#include <iostream>
using namespace std;
int main(){
	int a,i,sum=0;
	cout<<"enter the number to get the total sum of its nth term:-";
	cin>>a;
	for (i=1;i<=a;i++)
	{
		sum=sum+i;
		cout<<"the sum is:-"<<sum;
		cout<<endl;
	}
	return 0;
}
