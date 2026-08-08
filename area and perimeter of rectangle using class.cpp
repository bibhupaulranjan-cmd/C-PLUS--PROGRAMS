#include <iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
		public:
			int setlength(int l)
			{
				if (l>=0)
				length =l;
				else
				length =0;
			}
			int setbreadth(int b)
			{
				if (b>=0)
				breadth=b;
				else
				breadth=0;
			}
			int getlength()
			{
				return length;
			}
			int getbreadth()
			{
				return breadth;
			}
			int area()
			{
				return length*breadth;
			}
			int perimeter()
			{
				return 2*(length+breadth);
			}
};
int main(){
	int n,m;
	rectangle r;
	cout<<"enter the length:-";
	cin>>n;
	cout<<"enter the breadth:-";
	cin>>m;
	r.setlength(n);
	r.setbreadth(m);
	cout<<"the area is:-"<<r.area();
	cout<<endl;
	cout<<"the perimeter is:-"<<r.perimeter();
}
