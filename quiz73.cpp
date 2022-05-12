#include <iostream>
using namespace std;

int findmax(int number[], int from, int to);
int main()
{
    const int N=10;
    int max1, max2,i;
    int number [N] = {10, 15,0,-25,19,20,25,30,45,20};

    for(int i=0; i<N, i++)
    {
       
    }

    max1=findmax(number, 0, N/2-1);//first half
    cout << max1<< endl;
    max2=findmax(number, N/2, N-1);//second half
    cout << max2 << endl;
  
}
int findmax(int number[], int from, int to)
{
    for(int i=from; i< to; i++)
    {
        
    }
}