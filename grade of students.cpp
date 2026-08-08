#include <iostream>
using namespace std;
int main(){
	int m1,m2,m3,a;
	cout<<"enter the marks of maths:-";
	cin>>m1;
	cout<<"enter the marks of physics:-";
	cin>>m2;
	cout<<"enter the marks of chemistry:-";
	cin>>m3;
	a=(m1+m2+m3)/3;
	if (a>75)
	{
		cout<<"the grade is A";
	}
	else if (a>60)
	{
		cout<<"the grade is B";
	}
	else 
	{
		cout<<"the grade is C";
}
	return 0;
}
