#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//The program generates three random numbers and 
//then find the min number among these values. 
//We need to develop three functions as follows:

void getRandom(int &n1, int &n2, int &n3);
int findMin(int n1,int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

int main()
{
    int n1, n2, n3;
    int min=findMin(n1, n2, n3);
    int Result = n1, n2, n3, min;
    
    int rdnum;
    srand(time(0));
    
    void getRandom(int &n1, int &n2, int &n3)
    {

    }
    
}