#include <iostream>
using namespace std;

int main() {
    int A[5], n = 5, key, i;
    bool found = false;

    cout << "enter the numbers in array:-";
    for (i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "enter the key to search:-";
    cin >> key;

    for (i = 0; i < n; i++) {
        if (key == A[i]) {
            cout << "the number is found at:-" << i;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "the number is not found!";
    }

    return 0;
}
