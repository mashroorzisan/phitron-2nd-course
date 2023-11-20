#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *rakib = new Person("rakib", 23);
    Person *sakib = new Person("sakib", 24);

    *rakib = *sakib;
    delete sakib;
    cout << rakib->name;

    return 0;
}