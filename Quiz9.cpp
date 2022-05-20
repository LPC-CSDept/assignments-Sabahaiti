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
void findSalary(Employee e[],int count);
int makeStructArray(Employee e[]);

int main()
{
   Employee e[10];
   int numofRecords;
   string username;
   
   int count;
   if(count>0)
   {
       cout<< count <<endl;
   }
   findSalary(e,count);
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
        cout << e[i].id <<" "<< e[i].fname << " "<< e[i].lname << " "<< e[i].salary <<" " << e[i].departmentname << " "<< e[i].month <<" "<< e[i].day <<" "<< e[i].year <<" "<< endl;
        i++;   
     }
     return i;
}
void findSalary(Employee e[], int count)
{
    count=0;
    cout <<"Employee salary greater than 100,000"<<endl;
   
    for(int i=0; i<count; i++)
    {
        if(e[i].salary >100000)
        {
            cout <<e[i].id <<" " << e[i].fname <<" "<<e[i].lname<<" "<<e[i].salary <<" "<< e[i].departmentname<<" "<<e[i].month<<" "<<e[i].day<<" "<<e[i].year<<endl;
        }
    }
}
void computerDepartment(Employee e[], int count)
{
    cout<<"The employee in Computer department" << endl;
    for (int i=0; i<count; i++)
    {
        if(e[i].departmentname =="computer")
        {
            cout<<e[i].id<<" "<<e[i].fname<<" "<<e[i].lname<<" "<<e[i].salary<<" "<<e[i].departmentname<<" "<<e[i].month<<" "<<e[i].day<<" "<<e[i].year<<endl;
        }
    }
}

