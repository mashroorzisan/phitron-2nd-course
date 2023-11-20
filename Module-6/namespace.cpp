#include <bits/stdc++.h>
using namespace std;
namespace person
{
    string name = "zisan";
    int age = 23;
    void hello()
    {
        cout << "hello zisan" << endl;
    }
}
using namespace person;

int main()
{
    cout << person::name << endl;
    person::hello();
    return 0;
}