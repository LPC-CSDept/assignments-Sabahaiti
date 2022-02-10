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

    cout << "Enter the number of the Tickets sold for classA: ";
    cin >> classA;
    cout << "Enter the number of the Tickets sold for classB: ";
    cin >> classB;
    cout << "Enter the number of the Tickets sold for classC: ";
    cin >> classC;

    total = (classA * priceA)+(classB * priceB)+(classC * priceC);

    cout << "Total price for ticket sold " << total < endl;
    return 0;
}