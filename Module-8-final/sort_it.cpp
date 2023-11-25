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
void sort_it(Student *list, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int itm = list[i].math_marks + list[i].eng_marks;
            int jtm = list[j].math_marks + list[j].eng_marks;
            if (itm < jtm)
            {
                Student temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            else if (itm == jtm)
            {
                if (list[i].id > list[j].id)
                {
                    Student temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
        }
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

    sort_it(list, n);
    for (int i = 0; i < n; i++)
    {
        cout << list[i].nm << " " << list[i].cls << " " << list[i].s << " " << list[i].id << " " << list[i].math_marks << " " << list[i].eng_marks << endl;
        // }
    }
    return 0;
}