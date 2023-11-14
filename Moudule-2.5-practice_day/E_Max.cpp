#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    int mx = 0;
    for(int i = 0;i<n;i++){
        if(mx<ar[i]){
            mx = ar[i];
        }
    }
    cout<<mx;


    return 0;
}