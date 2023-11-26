#include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
    // default constructor
    Product(){};
    // custom constructor
    Product(int id, string name, double price)
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
    // method
    void setvalue(int id, string name, double price)
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }

    // another method
    double calc_tax()
    {
        return this->price * (5.0 / 100);
    }
};

int main()
{
    int n;
    cin >> n;
    Product products[n];
    // Product *a = new Product[n];
    // Product *b = new Product[n];
    // input
    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        double price;
        cin >> id >> name >> price;
        products[i].setvalue(id, name, price);
    }

    cout << products[0].calc_tax() << endl;
    cout << products[1].calc_tax() << endl;
    cout << products[2].calc_tax() << endl;

    // // output
    // for (int i = 0; i < n; i++)
    // {
    //     cout << " " << products[i].id << " " << products[i].name << " " << products[i].price << endl;
    // }

    return 0;
}