#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string b;
    cin >> b;

    // a += " "; append to the last
    // a += b;
    // a.append("+");
    // a.append("joba");
    // a.push_back('a');

    // a.erase(1, 2);
    a.replace(0, 2, "pi");
    cout << a << endl;
    return 0;
}