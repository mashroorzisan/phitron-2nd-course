#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    // sort(a,a+n)
    //ascending
    sort(&a[0],&a[0+n-1]);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" "  " ";
    }
    //descending
    // sort(a)
    for(int i = 0;i<n;i++){
        cout<<a[i]<<endl;
    }


    return 0;
}