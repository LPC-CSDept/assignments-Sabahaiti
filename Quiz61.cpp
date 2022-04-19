//Make a program that calls the two overloaded functions swapTwoValues( ) 
//so that two values are swapped in the function. According to the different 
//parameter data types, one of the two functions will be invoked.

//void swapTwoValues(int n1, int n2) :  Two integer values are swapped
//void swapTwoValues(float f1, float f2) : Two float values are swapped

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype, the different parameter 

void swapTwoValues(int &n1, int &n2);
void swapTwoValues(float &f1, float &f2 );

//call

int main()
{
    int n1, n2 ;
    float f1, f2;
    
    cout <<"Enter two integers:";
    cin >> n1 >> n2;

    cout <<"ENter two floating:";
    cin >> f1>> f2;

    swapTwoValues(n1, n2);
    cout <<"\nAfter swapping";
    cout <<"\n n1=" << n1 << "\nn2="<< n2;
    cout <<"\nfloating";
    cout <<"\nf1="<<f1 << "\nf2=" <<f2;
    swapTwoValues(f1,f2);
    cout <<"\nAfter swapping";
    cout <<"\nf1=" <<f1 <<"\nf2=" <<f2;
    return 0;

}
void swapTwoValues(int &n1, int &n2)
{
    int temp;
    temp =n1;
    n1= n2;
    n2=temp;
}
void swapTwoValues(float &f1, float &f2)
{
    float temp;
    temp =f1;
    f1= f2;
    f2=temp;
}
