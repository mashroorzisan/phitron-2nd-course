#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string e = "EGYPT";

    int k;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == e[0])
        {
            k = i;
            int j;
            for (j = 0; j < e.length(); j++)
            {
                if (s[i + j] != e[j])
                {
                    break;
                }
            }
            if (j == e.length())
            {
                s.replace(i, e.length(), " ");
            }
        }
    }
    cout << s;

    return 0;
}