#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int id;
    string name;
    char sec;
    int marks;
};
Student *generateStd(){
    Student *std = new Student;
    cin>> (*std).id >> (*std).name >> (*std).sec>> (*std).marks;
    return std;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        Student *std1 = generateStd();
        Student *std2 = generateStd();
        Student *std3 = generateStd();

        int mx = max({std1->marks, std2->marks, std3->marks});
        if(mx==std1->marks){
            cout<<std1->id<<" "<<std1->name<<" "<<std1->sec<<" "<<std1->marks<<endl;
        }
        else if(mx == std2->marks){
            cout<<std2->id<<" "<<std2->name<<" "<<std2->sec<<" "<<std2->marks<<endl;
        }
        else{
            cout<<std3->id<<" "<<std3->name<<" "<<std3->sec<<" "<<std3->marks<<endl;
        }

        delete std1;
        delete std2;
        delete std3;
    }
    return 0;
}