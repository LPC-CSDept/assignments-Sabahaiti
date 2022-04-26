#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

// N defined as 10

int number = 51;

// int getRdnum(void);
int getRdnum(void)
{
    return rand() % 50 + 1;
}

// int isGreater(int n);

int isGreater(int n)
{
    static int num = 0;

    if (n > num)
    {
        num = n;
        return 1;
    }
    else
    {
        num = n;
        return 0;
    }
    // Need closing braces
}

int main()
{
    int N = 10;
    ofstream ofs;

    ofs.open("number.txt");
    if (!ofs)
    {
        cerr << "File open Error\n";
        exit(0);
    }
    for (int i = 0; i < N; i++)
    {
        int num = getRdnum();
        cout << num << " ";
        if (isGreater(num))
            ofs << num << " ";
    }
    ofs.close();
}