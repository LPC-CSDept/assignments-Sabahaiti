#include <iostream>
using namespace std;
//Make a program that finds the list of prime numbers between the range [begin..end] 
//The “begin” and “end” are the user inputs that are between 1 to 100.
//begin < end
int main()
{
    int begin, end;
    int current_num;
    int flag =0;

    do {
        cout << " two number for the range";
        cin >> begin >> end;
    } while ((begin > end) || (begin < 1) || (end > 100));

    for (int i=2 ; i < current_num ; i++){
        if (current_num % i ==0){
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "not prime number " << endl;
    else
        cout << "Prime number " << endl;  
}