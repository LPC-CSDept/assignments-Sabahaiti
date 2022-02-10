#include <iostream>
using namespace std;

int main()
{
    int nummales;
    int numfemales;
    int total; 

    double males;
    double females;

    cout << "Enter the nummales: ";
    cin >> nummales;
    cout << "Enter the numfemales: ";
    cin >> numfemales;
    
    total = (nummales + numfemales);
   
    males = (nummales / total * 100);
    females = (numfemales / total * 100);

    cout << males  <<  females << endl;
    return 0;
}