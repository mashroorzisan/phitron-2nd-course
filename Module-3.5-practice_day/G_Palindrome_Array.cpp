#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    int i=0,j=n-1;
    int flag = 1;
    while(i<j){
        if(ar[i]!=ar[j]){
            flag = 0;
            break;
        }
        i++;j--;
    }

    (flag==1)? cout<<"YES"<<endl: cout<<"NO";

    return 0;
}