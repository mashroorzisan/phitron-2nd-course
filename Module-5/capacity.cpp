#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "capacitycapacitycapacitydflgkjdflgkdlfkjdlfkgjlsfjg;sdlkfjgs;lfkgjsflkgj;flgkjs;flkgjf;lkgjsfdl;kgj;sfkgjs;fdlkjs;fkgjs;fkgjsf;glkjf;gljsflg;j";
    // cout << s.max_size() << endl;
    // cout << s.size() << endl;
    // s.clear();
    // cout << s << endl;
    // cout << s.capacity() << endl;
    // cout << s.size() << endl;

    // (s.size() == 0) ? cout << "empty" << endl : cout << "not empty" << endl;

    // string s;
    // cin >> s;
    // cout << s.size() << endl;
    // s.resize(6);
    // s.resize(11, 'm');
    // cout << s;
    char *c = new char[5];
    cin >> c;
    // cout << c << endl;

    char *temp = new char[120];
    int len = strlen(c);
    for (int i = 0; i < len; i++)
    {
        temp[i] = c[i];
    }
    delete[] c;
    c = new char[12];
    for (int i = 0; i < len; i++)
    {
        c[i] = temp[i];
    }
    delete[] temp;
    c[5] = '_';
    c[6] = 'i';
    c[7] = 's';
    c[8] = 'g';
    c[9] = 'o';
    c[10] = 'o';
    c[11] = 'd';
    cout << c << endl;

    // string s;
    // cin >> s;

    // s = "sldjfl";
    // cout << s << endl;

    // char p[23];
    // cin >> p;
    // p = "izsan";
    // cout << p;
    // return 0;
}