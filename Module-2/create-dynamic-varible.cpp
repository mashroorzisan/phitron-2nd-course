#include<iostream>
using namespace std;
// int func(){//returning value
   int *func(){
    int *p = new int;
    *p = 112;
    // return *p;//returning value
    return p;//returning pointer
}
int main(){
    //stack/compile time memory
    int x = 10;
    //heap memory/runtime memory
    // new int;
    //access heap memory
    int *a = new int;
    *a = 10;
    // cout<<a<<endl;//prints memory
    // cout<<*a<<endl;//to print value of the memory, dereference the memory

    // int y = func();//getting value
    // cout<<y<<endl;//printing value
    
    int * y = func();
    cout<<y<<endl;
    return 0;
}