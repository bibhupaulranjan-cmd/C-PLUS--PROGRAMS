#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int a=0,v=0,c=0,i;
	cout<<"enter the string:-";
	getline(cin,str);
	for (i=0;str[i]!='\0';i++)
	{
		if ( str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
		{
			v++;
		}
		else if (str[i]==' ')
		{
			a++;
		}
		else 
		{
			c++;
		}
	}
	cout<<"the vowels are:-"<<v<<endl;
	cout<<"the conosonants are:-"<<c<<endl;
	cout<<"the total words are:-"<<v+c<<endl;
	return 0;
}
