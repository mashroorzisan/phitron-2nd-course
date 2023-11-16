#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double cgpa;
    //constructor
    Student(int roll, int cls, double cgpa){
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

Student func(){
    Student zisan(23,34,3.44);
    return zisan;
}

int main(){
    Student std = func();
    cout<<std.roll<<" "<<std.cls<<" "<<std.cgpa<<endl;
    return 0;
}