#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//The program generates three random numbers and 
//then find the min number among these values. 
//We need to develop three functions as follows:

void getRandom(int &n1, int &n2, int &n3);
{
    n1= rand();
    n2=rand();
    n3=rand();
}
int findMin(int n1, int n2, int n3)
{
    if (n1 < n2 && n1 < n3)
    return n1;
    if(n2<n3 && n2< n1)
    return n2;

    return n3;
}