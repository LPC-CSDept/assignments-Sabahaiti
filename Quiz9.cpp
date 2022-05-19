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
   Employee e[10];
   int numofRecords;
   string username;

   
    
}
int makeStructArray(Employee e[])
{
    ifstream ifs;
    int i;

    ifs.open("employee.txt");
    if(ifs)
    {
        i=0;
        
    }
}



