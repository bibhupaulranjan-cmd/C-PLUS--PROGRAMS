#include <iostream>
using namespace std;
int compare(int x,int y,int z)
{
	if (x>y && x>z)
	{
		return x;
	}
	else if (y>x && y>z)
	{
		return y;
	}
	else 
	{
		return z;
	}
}
int main(){
	int a,b,c;
	cout<<"enter three numbers:-";
	cin>>a>>b>>c;
	double greatest = compare(a,b,c);
	cout<<"the greatest of three numbers is:-"<<greatest;
	return 0;
}

