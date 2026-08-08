#include <iostream>
using namespace std;

int main() {
    int A[6] = {1, 2, 3, 4, 5, 6};
    int mid, l = 0, h = 5, key;
    bool found = false;

    cout << "Enter the key to search: ";
    cin >> key;

    while (l <= h) {
        mid = (l + h) / 2;

        if (key == A[mid]) {
            cout << "The key is at index: " << mid;
            found = true;
            break;
        }
        else if (key < A[mid]) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    if (!found) {
        cout << "Key not found!";
    }

    return 0;
}
