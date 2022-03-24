#include <iostream>
using namespace std;
// make program that shows the N to the power of 0, 1,2,3,...M
int main()
{
    double N; 
    int M;
    int pow;

    cout << "Enter you input:";
    cin >> N;
    
    pow = 1;
    for (int i=0; i<N; i++)
    {
        pow *= N;
    }
    cout << "power number :" << pow << endl;

}