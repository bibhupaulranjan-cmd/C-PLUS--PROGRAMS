#include <iostream>
using namespace std;
int main(){
	int a,r;
	cout<<"enter the number:-";
	cin>>a;
	while (a>0)
	{
		r=a%10;
		a=a/10;
		cout<<r;
	}
	return 0;
}
