#include <iostream>
using namespace std;

int main()
{
    int classA;
    int classB;
    int classC;

    int priceA = 15;
    int priceB = 12;
    int priceC = 9;

    int total;

    cout << "Enter the number of the Tickets sold for class A: ";
    cin >> classA;
    cout << "Enter the number of the Tickets sold for class B: ";
    cin >> classB;
    cout << "Enter the number of the Tickets sold for class C: ";
    cin >> classC;

    total = (classA * priceA)+(classB * priceB)+(classC * priceC);

    cout << "Total price for ticket sold " << total << endl;
    return 0;
}