#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the age of the person:-";
	cin>>a;
	if (a>=18 && a<=45)
	{
		cout<<"the person is valid for the offer";
	}
	else
	{
		cout<<"the person is not valid for the offer";
	}
	return 0;
}
