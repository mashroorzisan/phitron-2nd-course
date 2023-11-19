#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    getchar(); // ignores the next - 'space'
    getchar(); // ignores the next - 'enter'
    // cin.ignore(); // ignores the next character - 'space'
    // cin.ignore(); // ignores the next character - 'enter'
    // cin.ignore(); // ignores the next character - 'j'
    // cin >> s; // without space
    // karon getline enter khaya fele
    getline(cin, s); // with space
    cout << n << endl;
    cout << s << endl;

    return 0;
}