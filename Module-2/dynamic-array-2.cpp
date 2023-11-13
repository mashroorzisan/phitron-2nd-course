#include<iostream>
using namespace std;
int *func(){
    int *t = new int[5]; 
    for(int i =0;i<5;i++){
        cin>>t[i];
    }   
    return t;

}
int main(){
    int *a = func();
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}