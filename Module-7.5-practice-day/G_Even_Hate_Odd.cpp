#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int even = 0, odd = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            if (v % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == odd)
        {
            cout << "0" << endl;
        }
    }

    return 0;
}