#include <bits/stdc++.h>
using namespace std;

class Students
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

    Students *a = new Students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].age >> a[i].marks;
    }

    // Students
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // ascending order sort
            if (a[i].marks > a[j].marks)
            {
                // swap(a[i], a[j]);
                Students temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << " " << a[i].marks << endl;
    }
    delete[] a;

    return 0;
}