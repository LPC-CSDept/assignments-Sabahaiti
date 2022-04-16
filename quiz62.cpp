#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//The program generates three random numbers and 
//then find the min number among these values. 
//We need to develop three functions as follows:

void getRandnum(int &n1, int &n2, int &n3)
{
    n1= rand()%10;
    n2=rand()%10;
    n3=rand()%10;
}
int findMin(int n1, int n2, int n3)
{
    if (n1 < n2 && n1 < n3)
    return n1;
    if(n2<n3 && n2< n1)
    return n2;

    return n3;
}
void printResult(int n1, int n2, int n3, int min)
{
    cout << "Three random numbers: "<< n1 << " " << n2 << " " << n3 << endl;
    cout << "Min :" << min << endl;
}

int main()
{
    int n1, n2, n3;
    int min;
    getRandnum(n1, n2, n3);
    min= findMin(n1, n2, n3);
    printResult(n1, n2, n3, min);

}