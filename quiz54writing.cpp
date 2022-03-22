#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs;
    int Employee_ID;
    string Employee_Name;
    string Department_name;
    double salary;

    ofs.open("employee.txt");
    if(!ofs){
        cerr <<"File open Error \n";
        exit(0);
    } 
    cin >> Employee_ID;
    ofs << Employee_ID << endl;

    cin >> Employee_Name >> Department_name >> salary;
    ofs << Employee_Name << Department_name << salary;
}