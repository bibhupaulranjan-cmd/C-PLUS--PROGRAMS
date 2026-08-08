#include <iostream>
using namespace std;

int main(){
    int A[5]={1,-2,-8,9,7};
    int count=0,i,w=0;

    for(i=0;i<5;i++)
    {
        if (A[i] < 0)
        {
            count = count + 1;
        }

        if (A[i] > 0)
        {
            w = w + 1;
        }
    }

    cout << "the number of negative numbers is:-" << count << endl;
    cout << "the number of positive numbers is:-" << w;

    return 0;
}
