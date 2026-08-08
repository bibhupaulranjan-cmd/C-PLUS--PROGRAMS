#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> v;
    v.push_back("blue lays");
    v.push_back("kurkure");
    v.push_back("yellow lays");
    v.push_back("dairy milk");
    v.push_back("kitkat");

    vector<int> w;
    w.push_back(2);
    w.push_back(3);
    w.push_back(4);
    w.push_back(5);
    w.push_back(6);

    vector<int> x;
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);
    x.push_back(50);
    x.push_back(60);

    vector<string>::iterator itr;
    cout << "Product Names:\n";
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }

    vector<int>::iterator otr;
    cout << "\nQuantity:\n";
    for (otr = w.begin(); otr != w.end(); otr++)
    {
        cout << *otr<< endl ;
    }

    vector<int>::iterator ptr;
    cout << "\nPrice:\n";
    for (ptr = x.begin(); ptr != x.end(); ptr++)
    {
        cout << *ptr << endl;
    }

    return 0;
}

