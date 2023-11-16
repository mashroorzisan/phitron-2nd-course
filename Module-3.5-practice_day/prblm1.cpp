#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char sec;
    double math_marks;
    int cls;
    //constructor
    Student(string name, int roll,char sec, double math_marks, int cls ){
        this->name = name;
        this->roll = roll;
        this->sec = sec;
        this->math_marks  = math_marks;
        this->cls = cls;
    };
    
};


int main(){
    Student zisan("zisan", 12, 'a', 34.5, 12);
    Student anan("anan", 12, 'a', 47.5, 12);
    Student joba("joba", 12, 'a', 74.5, 12);
    
    if(zisan.math_marks>anan.math_marks&&zisan.math_marks>joba.math_marks){
        cout<<zisan.name<<endl;
    }
    else if(zisan.math_marks<anan.math_marks && joba.math_marks<anan.math_marks){
        cout<<anan.name<<endl;
    }
    else{
        cout<<joba.name<<endl;
    }
    
    
    return 0;
}