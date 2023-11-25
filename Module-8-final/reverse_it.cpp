#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
void reverse_it(Student *a, int n)
{
    // using two pointer technique
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        char temp = a[i].s;
        a[i].s = a[j].s;
        a[j].s = temp;
        i++;
        j--;
    }
}

int main()
{
    int n;
    cin >> n;
    Student std[n];
    // STEP -1 : GET THE INPUTS
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id;
    }

    // I WILL REVERSE HERE:->
    reverse_it(std, n);
    // last step- output
    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << endl;
        // }
    }
    return 0;
}