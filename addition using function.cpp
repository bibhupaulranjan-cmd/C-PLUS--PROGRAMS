#include <iostream>
using namespace std;
int add(int a,int b )
{
	int z;
	z=a+b;
	return z;
}
int main(){
	int c,d,f;
	cout<<"enter the first number:-";
	cin>>c;
	cout<<"enter the second number:-";
	cin>>d;
	f=add(c,d);
	cout<<f;
}
