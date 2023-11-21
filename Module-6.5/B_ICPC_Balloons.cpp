#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int ar[26] = {0};
        int cnt = 0;
        for (char c : s)
        {
            if (ar[c - 65] == 1)
            {
                cnt++;
            }
            else
            {
                cnt += 2;
                ar[c - 65]++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}