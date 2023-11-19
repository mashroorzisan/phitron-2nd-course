#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    // stringstream ss(s);
    stringstream ss;
    ss << s; // from left

    string word;
    // ss >> word; //kon dike jacche
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    int count = 0;
    while (ss >> word) // to right
    {
        cout << word << endl;
        count++;
    }
    cout << count << endl;

    return 0;
}