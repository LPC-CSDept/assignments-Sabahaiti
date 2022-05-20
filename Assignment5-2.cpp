#include <iostream>
using namespace std;

int main()
{
    int begin;
    int end;

    int i;
    int j;

    cin >> begin >> end;

    while (begin >= end || begin <2 || end <0);

    for(i=begin; i<=end; i++)
    {
        if(i==0 || i==1)
        
        for(j=2; j<=(i/2); j++)
            if(i% j ==0)
                break;
        if (j>(i/2))
            cout << i << endl;
    }
}