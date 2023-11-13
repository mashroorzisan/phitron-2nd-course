#include<iostream>
#include<utility>
using namespace std;

void myswap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<"a:"<<a<<endl;    
    cout<<"b:"<<b<<endl;    
    //swap without function
    // int temp = b;
    // b = a;
    // a = temp;
    // cout<<"after swap"<<endl;
    // cout<<"a:"<<a<<endl;    
    // cout<<"b:"<<b<<endl;    
    
    //swap with function
    // myswap(&a,&b);
    // cout<<"after swap"<<endl;
    // cout<<"a:"<<a<<endl;    
    // cout<<"b:"<<b<<endl;    
    
    //built in library function
    swap(a,b);
    cout<<"after swap"<<endl;
    cout<<"a:"<<a<<endl;    
    cout<<"b:"<<b<<endl;  
    

    return 0;
}