#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, r1, r2, d;

    cout << "Give the values of a, b and c for ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        cout << "The roots are " << r1 << " and " << r2;
    }
    else
    {
    	cout<<"roots does not exists";
	}
    
    return 0;
}
