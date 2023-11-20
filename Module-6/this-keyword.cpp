#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;

    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    };
    void printclass()
    {
        cout << this->name << " " << this->age << endl;
    }
};

int main()
{
    Student a("zisan", 23);
    a.printclass();
    return 0;
}