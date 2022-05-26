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
    Grade g;
    string field;
    string buf;
    stringstream ss;
    int i=0; 
    int fcnt=0;



    ifstream ifso;
    ifso. open ("grades.txt", fstream::in);
    ofstream ofso;
    ofso.open ("grades.bin", fstream::out);

    if(!ifso || !ofso)
    {
        cout << "open Error\n";
        exit(0);
    }
    while (ifso >> buf)
    {
        ss<< buf;
        while (getline (ss,field, ','))
        {
            switch(fcnt)
            {
                case 0:
                    g.first =field;
                    break;
                case 1;
                    g.last =field;
                    break;
                case 2:
                    g.ssn = field;
                case 3:
                    g.score= field;
                    break;
                    
            }
            fcnt =++fcnt %5;
        }
        ss.clear();
        ofso.write((char*) &g,sizeof(g));

        
    }



}


