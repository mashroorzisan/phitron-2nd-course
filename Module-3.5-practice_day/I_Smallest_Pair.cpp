#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
            
        int n;
        cin>>n;
        int a[n];
        for(int p =0;p<n;p++){
            cin>>a[p];
        }

        //i = 0 to i<n-1
        //j = i + 1 to j<n
        int mn = INT_MAX;
        for(int j = 0 ;j<n-1;j++){
            for(int k = j+1;k<n;k++){
                mn = min( mn, a[j]+a[k]+k-j);
            }
        }
        cout<<mn;


    }
    return 0;
}