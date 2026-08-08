#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Account{
	private:
		int account_number;
		int first_name;
		int last_name;
		int deposit;
		int withdraw;
		public:
			int setaccount_number(int s)
			{
				account_number=s;
			}
			int setfirst_name(int f)
			{
				first_name=f;
			}
			int setlast_name(int l)
			{
				last_name=l;
			}
			int setdeposit(int d)
			{
				deposit=d;
			}
			int setwithdraw(int w)
			{
				withdraw=w;
				cout<<"Amount withdrawn succesful!";
			}
			int getaccount_number()
			{
				return account_number;
			}
			int getfirst_name()
			{
				return first_name;
			}
			int getlast_name()
			{
				return last_name;
			}
			int getdeposit()
			{
				return deposit;
			}
			int getwithdraw()
			{
				return withdraw;
			}
};
