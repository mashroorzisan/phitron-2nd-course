#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}