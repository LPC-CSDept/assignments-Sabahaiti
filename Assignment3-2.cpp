#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int nummales;
    int numfemales;
    int total; 
    int percent;

    double malepercent;
    double femalepercent;


    cout << "Enter the nummales: ";
    cin >> nummales;
    cout << "Enter the numfemales: ";
    cin >> numfemales;
    
    total = nummales + numfemales;
    cout << total << endl;
   
    malepercent = (nummales / total * 0.1);
    cout << nummales <<endl ;
    femalepercent = (numfemales / total * 0.1);
    cout << numfemales << endl;
    cout << nummales  <<  numfemales << endl;
    return 0;
}