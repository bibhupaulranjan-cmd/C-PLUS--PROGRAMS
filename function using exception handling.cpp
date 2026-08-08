#include <iostream>
using namespace std;
int div(int x,int y)
{
	if (y==0)
	throw 1;
	return x/y;
}
int main (){
	int a=10,b=0,c;
	try
	{
		c=div(a,b);
		cout<<c;
	}
	catch(int e)
	{
		cout<<"division by zero error!";
	}
	return 0;
}
