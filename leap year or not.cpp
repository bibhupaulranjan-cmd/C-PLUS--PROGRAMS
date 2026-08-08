#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the year :-";
	cin>>a;
	if (a%4==0 && a%400==0)
	{
		cout<<"the year is a leap year";
	}
	else
	{
		cout<<"the year is not a leap year";
	}
	return 0;
}
