#include <iostream>
#include <fstream>
using namespace std;

void getInput(int &, int &);
int isSame(int, int);
int intDivision(int, int);
void fileWrite(ofstream &, int);


int main()
{
    int num1, num2;
    int result;
    ofstream ofs;

    getInput(num1, num2);
    

    if (num1 >num2)
    {
        result = intDivision(num1, num2);

    }
    else 
    {
        result = intDivision(num2, num1);
    }
    fileWrite(result);

}
void getInput(int &num1, int &num2)
{
    cin >> num1 >> num2;
    
}

int isSame(int &num1, int &num2)
{
    if(num1 == num2)
    {
        return 1;
    }
}

int intDivision(int &num1, int &num2)
{
    if(num1 > num2)
    {
        return num1 / num2;
    }
    else
    {
        return num2 / num1;
    }
}

void fileWrite (ofstream & ofs, int result)
{
    ofstream fileWrite;
    fileWrite.open("question5.txt");
    fileWrite << result << "\n";
    fileWrite.close();

}