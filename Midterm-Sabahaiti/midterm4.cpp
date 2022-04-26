#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//getRdnum( ), without parameter, it will return a random number between 1 to 100
int getRdnum()
{
    srand(time(0));
    return rand()% 100+1;
}

//getRdnum(n2), with a parameter, it will return a random number between 1 to n2
int getRdnum(int n2)
{
    srand(time(0));
    return rand()% n2+1;
}

//getRdnum(n1, n2), it will return a random number between n1+1 to n2
int getRdnum(int n1, int n2)
{
    srand(time(0));
    return rand()% (n2-(n1+1)+1)+n1+1;
}

