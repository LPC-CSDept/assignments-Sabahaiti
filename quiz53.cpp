#include <iostream>
using namespace std;
//Make a program that finds the list of prime numbers between the range [begin..end] 
//The “begin” and “end” are the user inputs that are between 1 to 100.
//begin < end
int main()
{
    int begin=1;
    int end=100;
    int i;
    int flag;
    

    cout <<"prime numbers:";
    cin>>begin >>end;

    cout <<"prime numbers between" << begin <<"and "<<end<<"are:";

    while (begin < end)
    {

        flag=0;

        for (int i=2; i<=begin/2; i++)
        {
            if(begin % i==0)
            {
                flag =1;
                break;
            }
        }
        if (flag==0)
            cout << begin <<"";
        begin++;
    }

    return 0;
}       