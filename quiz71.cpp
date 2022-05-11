#include <iostream>
#include <cmath>
using namespace std;

const int N =10;

int main()
{
    int number [N] = {10, 15,0,-25,19,20,25,30,45,20}; // initializing the array

    for(int i=0; i< N; i++)
    {
        if (i==0 && i+1 <N)
        {
            if ( abs (number[i] - number[i+1]) < 10) // find the first difference of 10
            {
                cout << number[i] << endl;
            }
        }else if (i==N-1 && i>0)
        {
              if (abs (number[i] - number[i-1]) < 10) // find last difference of 10
            {
                cout<< number[i] << endl;
            }
        }else if (( abs ( number[i] - number[i+1]) <10) && (abs (number[i]-number[i-1])< 10))
        {
            cout << number[i] << endl;
        }
          
    }   
   

}