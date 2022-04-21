#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ofstream ofs;
    int score1, score2;
    int sum;
    int cnt;
    string sname;
    float avg;

    ifs.open("students.txt");
    if(!ifs)
    {
        cout <<"File open Error\n";
        exit(0);
    }

    ofs.open("studentscore.txt");
    if(!ofs)
    {
        cout <<"File open Error\n";
        exit(0);
    }
    for (int i=0; i<=10; i++){
        ifs>>sname>>score1>>score2;

        cout <<sname<<" "<< score1 <<" " << score2<< endl;

        sum = score1 +score2;
        avg = sum/2.0;

       

        cout <<"sum:" << sum << " " << "avg: " << avg << endl;

        if(avg >80)
            cnt++;

    }
   //total number of students who have an average greater than 80.
   cout << "The total of students who have an average greater than 80: " << cnt << endl;
}

