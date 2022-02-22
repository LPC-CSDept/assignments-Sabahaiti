#include <iostream>
#include <cstdlib> // heade file for the rand and srand
#include <ctime> // time function, to give different seed umber at each run.
#include <iomanip>
using namespace std;

int main()
{
    // the variables declear
    int num1, num2, num3;
    int sum;
    double avg;
    srand(time(0)); // random number time function

    // display the three random numbers
    // If I set it as only rand() it takes a big number, so I decide it to make the numbers between 0~99
    num1 = rand() % 100 ;
    cout << num1 << endl;
    num2 = rand() % 100 ;
    cout << num2 << endl;
    num3 = rand() % 100;
    cout << num3 << endl;

    // display the sum of the three random numbers
    sum = num1 + num2 + num3;
    cout << "Total :" << sum << endl;

    // display the average of the three random numbers
    avg = sum / 3.0;
    cout << "Average :" << avg << endl;

    return 0;
}