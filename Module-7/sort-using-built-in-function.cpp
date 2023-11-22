#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    double marks;
};

// bool cmp(Student a, Student b)
// {
//     if (a.marks <= b.marks)
//     {
//         return true; // kisu koiro na//choto theke boro
//     }
//     else
//     {
//         return false; // swap koro or sort koro//
//     }
//     // shortcut
//     // return a.marks<=b.marks
// }

// bool cmp(Student a, Student b)
// {
//     if (a.marks < b.marks)
//     {
//         return true; // kisu koiro na//choto theke boro
//     }
//     else if (a.marks > b.marks)
//     {
//         return false; // swap koro or sort koro//
//     }
//     else
//     {
//         if (a.age < b.age)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
// }

// shortcut 1
// return a.marks<=b.marks
// }
// shortcut 2
bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.age > b.age;
    }
    else
    {
        return a.marks < b.marks;
    }
}
int main()
{
    int n;
    cin >> n;
    // Student a[n];
    Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].age >> a[i].marks;
        // cin.ignore();
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << " " << a[i].marks << endl;
    }
    delete[] a;
    return 0;
}