#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1;
	int i,l;
	cout<<"enter the string:-";
	getline(cin,s1);
	for (i=0 ;s1[i]!='\0';i++)
	{
		l=s1.length();
	}
	cout<<"the length of the string is :-"<<l;
	return 0;
}
