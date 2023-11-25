#include <bits/stdc++.h>
using namespace std;

bool isjessica(string &word)
{
    string jes("Jessica");
    int jlen = jes.length();
    int wlen = word.length();

    int i;
    if (wlen == jlen)
    {
        for (i = 0; i < wlen; i++)
        {
            if (word[i] != jes[i])
            {
                return false;
            }
        }
        return true;
    }
    return false;
}
int main()
{

    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool tf = false;
    while (ss >> word)
    {
        // if (isjessica(word))
        // {
        //     tf = true;
        //     break;
        // }
        tf = isjessica(word);
        }
    // (tf) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}