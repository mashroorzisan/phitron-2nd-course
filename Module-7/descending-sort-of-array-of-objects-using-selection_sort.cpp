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
        cin >> a[i].name >> a[i].age >> a[i].marks;
    }

    // descending sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].age < a[j].age)
            {
                // swap(a[i], a[j]);
                Student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << " " << a[i].marks << endl;
    }

    return 0;
}