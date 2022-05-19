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
    // int month;
    string month;
    int day;
    int year;

};

void printEmployee(Employee e);
int makeStructArray(Employee e[]);

int main()
{
   Employee e[10];
   int numofRecords;
   string username;

    makeStructArray(e);
    
}
int makeStructArray(Employee e[])
{
    ifstream ifs;
    int i;

    ifs.open("employee.txt");
    i =0;

    cout << i << endl;
     while ( ifs >> e[i].id >> e[i].fname >> e[i].lname >> e[i].salary >> e[i].departmentname >> e[i].month >> e[i].day >> e[i].year)
     {
         cout << i << endl;
        cout << e[i].id << e[i].fname << e[i].lname << e[i].salary << e[i].departmentname << e[i].month << e[i].day << e[i].year << endl;
        i++;   
     }
     return i;
}



