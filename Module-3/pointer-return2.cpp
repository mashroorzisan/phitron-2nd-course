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

Student *zisan(){
    Student zisan(120, 15, 3.28);
    Student *z = &zisan;
    return z;
}
int main(){
    Student *zisan1 = zisan();
    cout<<zisan1->roll;
    return 0;
}