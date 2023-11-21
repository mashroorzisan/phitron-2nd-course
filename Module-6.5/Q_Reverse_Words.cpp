#include <bits/stdc++.h>
using namespace std;
void reverse(string &s)
{
    int j = s.length() - 1;
    int i = 0;
    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
        i++;
    }
}
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int i = 0;
    while (ss >> word)
    {
        reverse(word);
        if (i == 0)
        {
            i = 1;
            cout << word;
        }
        else
        {
            cout << " " << word;
        }
        // cout << word << " ";
    }
    return 0;
}