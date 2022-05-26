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

int main()
{
    const int SIZE1=5;
    const int SIZE2 =10;
    int numbers1[SIZE1]={2,3,5,9,10};
    int numbers2[SIZE2]={1,2,3,5,9,10,11,13,15,17};

    if(isSubset(numbers1, numbers2, SIZE1, SIZE2))
        cout <<"numbers1 is subset of numbers2" << endl;
    else
        cout <<"numbers1 is not a subset of numbers2" << endl;
}