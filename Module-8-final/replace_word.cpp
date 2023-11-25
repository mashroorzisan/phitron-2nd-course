#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s;
        cin >> x;
        int slen = s.length();
        int xlen = x.length();

        for (int i = 0; i < slen; i++)
        {
            if (x[0] == s[i])
            {
                int j;
                for (j = 0; j < xlen; j++)
                {
                    if (s[i + j] != x[j])
                    {
                        break;
                    }
                }
                if (j == xlen)
                {
                    s.replace(i, xlen, "#");
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}