#include <iostream>
using namespace std;

int main()
{
    // declare the variable
    int i;
    i=500;

    double weight;
    double total_charges;
    double distance;

    double drate;

    const double distance1 = 10;
    const double distance2=3000;
    const double weight1=0;
    const double weight2=20;

    const double twoKg = 1.10;
    const double two_sixKg = 2.20;
    const double six_tenKg = 3.70;
    const double ten_twentyKg = 4.80;

    //fir the weight and the distance
    
    cout <<" Enter the distance :" <<endl;
    cin >> distance;

    //display the distance
    if ((distance < distance1)||(distance > distance2))
    {
         cout << "try again \n";
    }

    else 
    {
         cout <<"Enter the weight :" <<endl;
         cin >> weight;

         if ((weight <= weight1) || ( weight > weight2))
         {
             cout <<"try again \n";
         }
    }
    {
        
        if (weight <= 2)
        {
            drate = twoKg;
            total_charges = (distance / 500.00) * 1.10;
            cout << " Shipping charge : " <<  total_charges <<endl;
        }
        else if ((weight >2 ) && (weight <= 6))
        {
            drate = two_sixKg;
            total_charges = (distance / 500.00) * 2.20;
            cout << "Shipping charge : " << total_charges << endl;
        }
        else if ((weight > 6) && (weight < 10))
        {
            drate = six_tenKg;
            total_charges = (distance / 500.00) * 3.70;
            cout << "Shipping charge : " << total_charges << endl;
        }
        else if ((weight > 10 ) && (weight <20))
        {
            drate = ten_twentyKg;
            total_charges = (distance / 500.00) * 4.80;
            cout <<"Shipping charge :" << total_charges << endl;

        }



    }






}