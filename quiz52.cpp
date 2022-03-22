#include <iostream>
using namespace std;
// make program that shows the N to the power of 0, 1,2,3,...M
int main()
{
    int N, M;

    cout << "Enter you input:";
    cin >> N;
    M =1;
    while (M <=N){
        cout << M << "\t"<< N* M << endl;
        M +=1;
    }

}