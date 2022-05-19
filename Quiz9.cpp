#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Employee
{
    int id;
    string fname;
    string lname;
    double salary;
    string departmentname;
    int month;
    int day;
    int year;

};

void printEmployee(Employee e);

int main()
{
    Employee e;
    ifstream ifs;
    ifs.open("employee.txt");
    if(ifs)
    {
        while (ifs >> e.id >> e.fname >>e. lname)
        {
            
        }
    }
}




