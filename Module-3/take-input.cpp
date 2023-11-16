#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
            char name[100];
            int roll;
            double cgpa;
};

int main(){
    //class and obj
    //std1 and std2 are groups
    Student std1, std2;
    cin>>std1.name>>std1.roll>>std1.cgpa;
    cin>>std2.name>>std2.roll>>std2.cgpa;
    cout<< "1:- "<< std1.name<<" "<<std1.roll<<" "<<std1.cgpa<<endl;
    cout<< "2:- "<< std2.name<<" "<<std2.roll<<" "<<std2.cgpa<<endl;

    return 0;
}