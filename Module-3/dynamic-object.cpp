#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        int cls;
        double gpa;
        //constructor;
        Student(int roll, int cls, double gpa){
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
        }
};

Student *func(){
    Student *karim = new Student(23, 43, 232.3);
    return karim;
}

int main(){

    Student *hakim = func();
    cout<<hakim->roll<<endl;
    cout<<hakim->cls<<endl;
    cout<<hakim->gpa<<endl;
    delete hakim;
    cout<<hakim->roll<<endl;
    cout<<hakim->cls<<endl;
    cout<<hakim->gpa<<endl;
    return 0;
}