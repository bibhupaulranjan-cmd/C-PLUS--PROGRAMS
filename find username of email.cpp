#include <iostream>
#include <string>
using namespace std;
int main(){
	string email,uname;
	int i;
	cout<<"enter your email:-";
	cin>>email;
	i=(int)email.find('@');
	uname=email.substr(0,i);
	cout<<"your username is:-"<<uname;
	return 0;
}
