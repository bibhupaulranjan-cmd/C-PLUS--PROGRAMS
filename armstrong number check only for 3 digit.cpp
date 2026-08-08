#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0, r;

    cout << "Enter the number: ";
    cin >> n;

    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }

    if (sum == m)
    {
        cout << "It is an Armstrong number!";
    }
    else
    {
        cout << "It is not an Armstrong number!";
    }

    return 0;
}
