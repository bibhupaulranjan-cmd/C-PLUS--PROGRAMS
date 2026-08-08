#include <iostream>
using namespace std;
int main(){
	int a,i,factorial=1;
	cout<<"enter the number:-";
	cin>>a;
	for (i=1;i<=a;i++)
	{
		factorial = factorial*i;
	}
	cout<<"the factorial of the number is:-"<<factorial;
	return 0;
}
