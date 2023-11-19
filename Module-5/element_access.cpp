#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << "frist direct - " << s[0] << endl;           // first index -directly
    cout << "first functional - " << s.at(0) << endl;    // first index-functional
    cout << "last direct - " << s[s.size() - 1] << endl; // last direct
    cout << "last functional - " << s.back() << endl;    // last functional

    return 0;
}