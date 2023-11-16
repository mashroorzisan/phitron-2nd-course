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
    char tmp[100] = "zisan";
    strcpy(std1.name,tmp); 
    std1.roll = 12;
    std1.cgpa = 3.43;

    // YOU CAN ONLY DECLARE STRING WHEN INITIALIZING
    // BUT STR1.NAME AND STR2.NAME WAS INITIALIZED BEFORE
    // THATS WHY WE NEED TO COPY THE NAME FROM ANOTHER TEMPORARY VARIABLE
    char tmp2[100] = "anan";
    strcpy(std2.name,tmp2);
    std2.roll = 13;
    std2.cgpa = 3.19;
    cout<< "    Name"<<"  "<<"Roll"<<"  "<<"Cgpa"<<endl;
    cout<< "1:- "<< std1.name<<" "<<std1.roll<<" "<<std1.cgpa<<endl;
    cout<< "2:- "<< std2.name<<" "<<std2.roll<<" "<<std2.cgpa<<endl;

    return 0;
}