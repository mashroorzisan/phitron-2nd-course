#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        int cls;
        double gpa;
        //constructor
        Student(int r, int c, int g){
            roll = r;
            cls = c;
            gpa = g;
        }

};
int main(){
    Student zisan(2008120,15,3.28);
    cout<<zisan.roll<<endl;
    cout<<zisan.cls<<endl;
    cout<<zisan.gpa<<endl;
    return 0;
}