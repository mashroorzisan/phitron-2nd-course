#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int mxlen = 100000;
    char s[mxlen];
    while(cin.getline(s,mxlen)){
        int len = strlen(s);
        sort(s, s+len);
        for(int i = 0;i<len;i++){
            if(s[i]!=' '){
                cout<<s[i];
                }
            }
    cout<<endl;
    }
    return 0;
}