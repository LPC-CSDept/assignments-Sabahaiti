#include <iostream>
using namespace std;

int main()
{
    const int originalprice = 99;
    const double Perc20 =20.0 ;
    const double Perc30 =30.0;
    const double Perc40 =40.0;
    const double Perc50 =50.0;

    double drate, originalamount, discountamount, salesprice;

    int numofsold;

    cout <<"Enter the number of sold : ";
    cin >> numofsold;

    if (numofsold < 0)
        exit(0);

    if (numofsold >= 100)
        drate=Perc50;
    else if (numofsold >=50)
        drate=Perc40;
    else if (numofsold >=20)
        drate=Perc30;
    else
        drate=Perc20;

    originalamount = originalprice * numofsold;
    cout <<originalamount <<endl;
    discountamount = originalamount * drate;
    cout << discountamount << endl;
    salesprice = originalamount - discountamount;
    cout << salesprice << endl;

    cout << originalamount << discountamount << salesprice << endl;
}