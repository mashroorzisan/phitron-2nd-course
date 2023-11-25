#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{

    if (a.eng_marks < b.eng_marks)
    {
        return false; // do swap
    }
    else if (a.eng_marks == b.eng_marks)
    {
        if (a.math_marks < b.math_marks)
        {
            return false; // do swap
        }
        else if (a.math_marks == b.math_marks)
        {
            if (a.id > b.id)
            {
                return false; // do swap
            }
            else
            {
                return true; // do not swap
            }
        }
        else
        {
            return true; // do not swap
        }
    }
    else
    {
        return true; // do not swap
    }
}
int main()
{
    int n;
    cin >> n;
    Student list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i].nm >> list[i].cls >> list[i].s >> list[i].id >> list[i].math_marks >> list[i].eng_marks;
    }

    sort(list, list + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << list[i].nm << " " << list[i].cls << " " << list[i].s << " " << list[i].id << " " << list[i].math_marks << " " << list[i].eng_marks << endl;
        // }
    }
    return 0;
}