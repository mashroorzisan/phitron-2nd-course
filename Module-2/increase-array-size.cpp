#include<bits/stdc++.h>
using namespace std;
int main(){
    //declare array1 of size 3
    int *a = new int[3];
    //declare array3 of size 3
    int *b = new int[3];
    //take input for arry1
    for(int i = 0;i<3;i++){
        cin>>a[i];
    }
    //copy them to array2
    for(int i =0;i<3;i++){
        b[i] = a[i];
    }
    //delete array1
    delete[] a;
    //increase size of array1
    a = new int[5];
    //copy array2's elements to array1
    for(int i = 0;i<3;i++){
        a[i]=b[i];
    }
    // delete array2
    delete[] b;
    // manipulate array1
    a[3] = 500;
    a[4] = 900;


    //display array1
    for(int i = 0;i<5;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}