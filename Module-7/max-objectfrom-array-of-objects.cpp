#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    double marks;
};

int main()
{
    int n;
    cin >> n;

    Student *a = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].marks;
    }

    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks >= mx.marks)
        {
            mx = a[i];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].name << " " << a[i].age << " " << a[i].marks << endl;
    // }

    cout << "Maximum marks is : " << mx.marks << endl;
    cout << "Maximum marks is obtained by : " << mx.name << endl;
    cout << "His/her age is : " << mx.age;
    delete[] a;
    return 0;
}