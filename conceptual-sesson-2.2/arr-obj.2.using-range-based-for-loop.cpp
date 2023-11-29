#include <bits/stdc++.h>
using namespace std;

class Product
{
public:
    int id;
    string name;
    double price;
};

int main()
{

    int n;
    cin >> n;
    Product products[n];
    // int a[] = {1, 2, 3, 4};
    // for (int x : a)
    // {
    //     cout << x << endl;
    // }

    for (Product &x : products)
    {
        cin >> x.id >> x.name >> x.price;
    }

    for (Product x : products)
    {
        cout << x.id << " " << x.name << " " << x.price << endl;
    }
    return 0;
}