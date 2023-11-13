#include<iostream>
using namespace std;

int *arra(){

    int *a = new int[5];
     for(int i = 0 ;i<5;i++){
        cin>>a[i];
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    //access the array-head from heap
    // int *a = new int[n];
    // for(int i = 0 ;i<n;i++){
    //     cin>>a[i];
    // }
    int *arr = arra();

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}