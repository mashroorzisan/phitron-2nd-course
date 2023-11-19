#include<bits/stdc++.h>
using namespace std;

long long int *sort_it(int n){
    long long int *a = new long long int [n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<long long int>());
    return a;
}
int main(){
    int n;
    cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    cout<<(*sort_it(n))[0];
    
    delete [] a;

    return 0;
}