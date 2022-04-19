#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

// N defined as 10

int number=51;

int getRdnum(void);
{
    return rand()% 50 +1;
}

int isGreater(int n);
{

    if (n> num)
    {
        num=n;
        return 1;
    } else
    {
        num =n;
        return 0;
    }
    
}