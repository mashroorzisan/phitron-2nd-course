#include <bits/stdc++.h>
using namespace std;
string only_word(string &s)
{
    int i = 0;
    for (char c : s)
    {
        if (c == '!' || c == '.' || c == '_' || c == ',' || c == '?')
        {
            i++;
        }
    }
    string b(s, i);
    return b;
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;

    string new_w;

    while (ss >> word)
    {

        new_w = new_w + " " + only_word(word);
    }
    int count = 0;
    stringstream pp(new_w);
    string w;
    while (pp >> w)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}