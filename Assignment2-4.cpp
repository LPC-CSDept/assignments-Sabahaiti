#include <iostream>
using namespace std;

int main()
{
    double regular_Price,discount,sale_Price;

    regular_Price = 59.95;
    discount = regular_Price * 0.2;
    sale_Price = regular_Price - discount;

    cout << "Regular Price : $" << regular_Price << endl;
    cout << "Discount amount : $" << discount << endl;
    cout << "Sale price : $" << sale_Price << endl;

}