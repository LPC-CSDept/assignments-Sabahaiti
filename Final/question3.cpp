#include <iostream>
using namespace std;

bool isSubset(int numbers1[], int numbers2[], int SIZE1, int SIZE2)
{
    int i=0;
    int j=0;
    for(i=0; i<SIZE1; i++)
    {
        for(j=0; j<SIZE2; j++)
        {
            if(numbers1[i] == numbers2[j])
            break;
        }
        if(j == SIZE2)
        return 0;
    }
    return 1;
}