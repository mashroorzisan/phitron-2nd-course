#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char c[1000];
    // cin >> c;
    // int len = strlen(c);
    // cout << len << endl;

    string x = "zisan";
    // cout << *x.begin() << endl;
    // cout << *(x.end() - 2) << endl;

    // string ::iterator it;
    auto it = x.begin();
    for (it; it < x.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}