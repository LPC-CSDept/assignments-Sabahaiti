//Make a program that calls the two overloaded functions swapTwoValues( ) 
//so that two values are swapped in the function. According to the different 
//parameter data types, one of the two functions will be invoked.

//void swapTwoValues(int n1, int n2) :  Two integer values are swapped
//void swapTwoValues(float f1, float f2) : Two float values are swapped

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype, the different parameter 

void swapTwoValues(int n1, int n2);
void swapTwoValues(float f1, float f2);

//call

int main()
{
    int n1, n2;
    float f1, f2;

    cout << fixed << showpoint << setprecision(2);
    cout <<"Enter an integer :";
    cout <<"Enter a floating value: ";
    cin >> n1 >> "" >> n2 >>"" >>f1 >>"" >> f2;
    

}