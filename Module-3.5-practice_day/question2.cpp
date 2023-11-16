#include<bits/stdc++.h>
using namespace std;
class Cricketer{
public:
    int jersey_no;
    string country;
};


int main(){
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 71;
    dhoni->country = "india";

    Cricketer *kohli = new Cricketer;
    kohli-> country= dhoni->country;
    kohli-> jersey_no= dhoni->jersey_no;

    cout<<kohli->jersey_no<<" "<<kohli->country;

    return 0;
}