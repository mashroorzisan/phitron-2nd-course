#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    double gpa;
};

int main()
{
    int n;
    cin >> n;
    // Student a[n];
    Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].gpa;
        // cin.ignore();
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << " " << a[i].gpa << endl;
    }
    return 0;
}