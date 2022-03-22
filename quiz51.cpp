#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// minimum 5 random numbers
//The range of random numbers 0-99
int main()
{
    const int N=5;
    int rdnum;
    int min;
   

    srand(time(0));

    for (int i=0; i < 5; i++){
        rdnum = rand()%100;
        cout << rdnum<< endl;

        if ((i==0)|| (min > rdnum))
            min = rdnum;

    }
    cout << "Min:" <<  min<< endl;
}