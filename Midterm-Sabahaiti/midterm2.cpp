#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ofstream ofs;
    int score1, score2;
    int sum;
    string sname;
    float avg;

    ifs.open("students.txt");
    if(!ifs)

