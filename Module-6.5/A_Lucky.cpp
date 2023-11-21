#include <bits/stdc++.h>
using namespace std;
bool process(string &p)
{
    int cnt = 0, rev = 0;
    for (int i = 0; i < 3; i++)
    {
        cnt = cnt + int(p[i]) - 48;
    }
    for (int i = 5; i >= 3; i--)
    {
        rev = rev + int(p[i]) - 48;
    }

    if (rev == cnt)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string p;
        cin >> p;
        bool t;
        t = process(p);
        (t) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}