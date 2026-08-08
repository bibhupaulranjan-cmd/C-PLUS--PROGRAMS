#include <iostream>
using namespace std;
int main ()
{
	float a,b,c,d;
	cout<<"enter the basic salary:-";
	cin>>a;
	cout<<"enter the percentage of allowances:-";
	cin>>b;
	cout<<"enter the percentage of deductions:-";
	cin>>c;
	d=a+a*b-a*c;
	cout<<"the gross salary of the person is:-"<<d;
	return 0;
}
