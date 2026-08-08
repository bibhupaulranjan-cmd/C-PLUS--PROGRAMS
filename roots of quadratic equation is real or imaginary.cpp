#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"give the a b and c of the quadratic equation ax^2 + bx + c :-";
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	if (d=0)
	{
		cout<<"the root is real and equal";
	}
	else if (d>0)
	{
		cout<<"the roots are real and unequal";
	}
	else
	{
		cout<<"the root is imaginary";
	}
	
}
