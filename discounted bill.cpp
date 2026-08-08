#include <iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"enter the total amount of your bill:-";
	cin>>a;
	if (a>=5000)
	{
	cout<<"you get a discount of 20%.   ";
	cout<<endl;
	b=a-(a*0.20);
	cout<<"your bill after discount is:-"<<b;
	
}
else if (a>= 2000)
{
	cout<<"you get a discount of 15%.   ";
	cout<<endl;
	c=a-(a*0.15);
	cout<<"your bill after discount is:-"<<c;
	
}
else
{
	cout<<"sorry you dont get any discount.   ";
	cout<<endl;
	cout<<"your bill is :-"<<a;
	
}
return 0;
}
