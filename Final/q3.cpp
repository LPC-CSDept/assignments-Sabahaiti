#include <iostream>
using namespace std;

int main()
{
    const int SIZE1 =5;
    const int SIZE2 =10;
    int numbers1[SIZE1] ={2, 3, 5, 9, 10};
    int numbers2 [SIZE2] = {1,2,3,5,9,10,11,13,15,17};

    unordered_set<int> s;
    for (int i=0; i<SIZE1; i++)
    {
        s.insert(numbers1[i]);
    }
    int p= s.size();
    for (int i=0; i< SIZE2; i++)
    {
        s.insert(numbers2[i]);

    }
    if (s.size() == p)
    {
        cout << "number1 is subset of number 2" << endl;

    }
    else 
    {
        cout << "number 1 is not subset of number 2" << endl;
    }
}