#include <iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter the character:-";
	cin>>ch;
	if (isalpha(ch))
	{
		cout<<"the character is a alphabet!";
	}
	else
	{
		cout<<"the character is a number!";
	}
	return 0;
}
