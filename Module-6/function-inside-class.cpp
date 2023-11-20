#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    int math;
    int physics;

    Student(string nm, int ag, int mat, int phy)
    {
        name = nm;
        age = ag;
        math = mat;
        physics = phy;
    }
    void hello()
    {
        cout << "Hello"
             << "  " << name << age << endl;
    }
    // return
    int totalmarks()
    {
        return math + physics;
    }
};

int main()
{
    Student a("zisan", 23, 90, 80);
    a.hello();
    int total_marks = a.totalmarks();
    cout << total_marks << endl;
    return 0;
}