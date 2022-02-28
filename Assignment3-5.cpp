#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num1, num2, num3;
    int sum;
    double avg;

    srand (time(0));
    num1 = rand()% 100;
    cout << num1 << endl;
    num2 = rand () % 100;
    cout << num2 << endl;
    num3 = rand () % 100;
    cout << num3 << endl;

    sum = num1 + num2 + num3;
    cout <<sum << endl;
    avg= sum /3;
    cout << avg << endl;

}