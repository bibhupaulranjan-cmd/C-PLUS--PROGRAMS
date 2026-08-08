#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the day number:-";
	cin>>a;
	if (a==0)
	{
		cout<<"today is monday";
	}
	else if (a==1)
	{
		cout<<"today is tuesday";
	}
	else if (a==2)
	{
		cout<<"today is wednesday";
	}
	else if(a==3)
	{
		cout<<"today is thrusday";
	}
	else if (a==4)
	{
		cout<<"today is friday";
	}
	else if (a==5)
	{
		cout<<"today is saturday";
		
	}
	else
	{
		cout<<"today is sunday";
	}
	return 0;
}
