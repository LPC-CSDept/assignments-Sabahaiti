#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

const unsigned short N=5;
struct Scores{
    double sc[N];
    string grade;
};

struct Grade{
    string first;
    string last;
    string ssn;
    Scores score;
};
Grade g;

int main()
{
    string buf;
    stringstream ss;

    ifstream ifso;
    ifso. open ("grades.txt", fstream::in);
    ofstream ofso;
    ofso.open ("grades.bin", fstream::out);

    if(!ifso || !ofso)
    {
        cout << "open Error\n";
        exit(0);
    }

    


}


