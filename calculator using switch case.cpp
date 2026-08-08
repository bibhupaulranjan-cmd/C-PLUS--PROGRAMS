#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cin >> c;

    switch(c)
    {
        case 1:
            d = a + b;
            break;

        case 2:
            d = a - b;
            break;

        case 3:
            d = a * b;
            break;

        case 4:
            d = a / b;
            break;

        default:
            cout << "Invalid choice!";
            return 0;
    }

    cout << "Your answer is: " << d;

    return 0;
}
