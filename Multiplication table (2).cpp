#include <iostream>
using namespace std;
int main(){
	int a,i;
	cout<<"enter the number for multiplication table:-";
	cin>>a;
	for (i=1;i<=10;i++)
	{
		cout<<a<<"*"<<i<<"="<<i*a;
		cout<<endl;
	}
	return 0;
	
}
