#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
    ifstream infile("bibhu.txt");
    
    if (!infile) {
        cerr << "Error: File cannot be opened" << endl;
        return 1; 
    }
    
    string str;
    int x;
    

    if (infile >> str >> x) {
        cout << str << " " << x << endl;
    } else {
        cerr << "Error: Invalid data format in file." << endl;
    }
    

    infile.close();
    
    return 0;
}
