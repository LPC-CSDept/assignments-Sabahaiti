#include <iostream>
using namespace std;

int main()
{
    double Celcius, Fahrenheit;

    cout << "Enter the temperature by Ceicilus \n";
    cin >> Celcius;

    Fahrenheit = 9/5.0 * Celcius +32;
    cout << "Celcius" << Celcius << "is " << Fahrenheit << "Fahrenheit \n";

    return 0;
}