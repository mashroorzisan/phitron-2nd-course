#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int count = 0;
    bool insideword = false;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (insideword == false)
            {
                insideword = true;
                count++;
            }
        }
        else
        {
            insideword = false;
        }
    }
    cout << count << endl;
    return 0;
}