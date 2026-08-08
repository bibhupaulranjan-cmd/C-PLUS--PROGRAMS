#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream outfile ("bibhu.txt",ios::trunc);
	outfile<<"hello"<<endl;
	outfile<<"19"<<endl;
	outfile.close();
}
