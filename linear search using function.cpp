#include <iostream>
using namespace std;

int search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
}

int main()
{
    int x[20], k, keys, w;
    int j;

    cout << "Enter the number of elements: ";
    cin >> k;

    cout << "Enter the elements of the array: ";
    for ( j = 0; j < k; j++)
    {
        cin >> x[j];
    }

    cout << "Enter the key to search: ";
    cin >> keys;

    w = search(x, k, keys);
    if (keys!=x[j])
    {
    	cout<<"the key does not exist!";
	}
	else{

   cout<<"the key is at index:-"<<w;
}
    return 0;
}
