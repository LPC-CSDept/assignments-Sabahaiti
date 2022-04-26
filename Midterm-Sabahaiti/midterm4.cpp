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