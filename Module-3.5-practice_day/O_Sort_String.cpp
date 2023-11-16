#include<bits/stdc++.h>
using namespace std;

void pagluSort(string *str) {
    int n = str->length();

    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if ((*str)[i] > (*str)[j]) {
                // swap characters
                char temp = (*str)[i];
                (*str)[i] = (*str)[j];
                (*str)[j] = temp;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    pagluSort(&S);

    cout << S << endl;

    return 0;
}
