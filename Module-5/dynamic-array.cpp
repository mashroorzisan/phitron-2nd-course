#include <bits/stdc++.h>
using namespace std;
int main()
{
    // dynamic array a[]
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    // second dynamic array tepm[]
    int *temp = new int[5];
    // copy a[] to a temp array
    for (int i = 0; i < 5; i++)
    {
        temp[i] = a[i];
    }
    // delete a
    delete[] a;
    // resize array a[] ->7
    a = new int[7];
    // get the copy to a[]
    for (int i = 0; i < 5; i++)
    {
        a[i] = temp[i];
    }
    // cout a;
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << endl;
    }

    a[5] = 12;
    a[6] = 16;

    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << endl;
    }
    delete[] a;
    return 0;
}