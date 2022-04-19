#include <iostream>
using namespace std;

int main()
{
    const  int N=5, M=5;
    int  i, j;
    for(i=0;i<5;i++) 
    {   for(j=i; j<5-i; j++)
            cout << " (" << i << "," << j << ") " ;
        cout << endl;
    }

}