#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    int ID1, ID2, ID3;
    string Em_name1,Em_name2,Em_name3;
    string De_name1,De_name2, De_name3;
    double salary1, salary2, salary3;
    double sum, avg;
    double tsum, tavg;

    ifs. open("employee.txt");
    cout << "Employee_ID 1:";
    cin >> ID1;
    cout << "Employee_ID 2:";
    cin >> ID2;
    cout << "Employee_ID 3:";
    cin >> ID3;

    cout <<"Employee name 1:";
    cin >> Em_name1;
    cout <<"Employee name 2:";
    cin >> Em_name2;
    cout << "Employee name 3:";
    cin >> Em_name3;

    cout << "Department name 1:";
    cin >> De_name1;
    cout << "Department name 2:";
    cin >> De_name2;
    cout << "Department name 3:";
    cin >> De_name3;

    cout << "salary 1:";
    cin >> salary1;
    cout << "salary 2:";
    cin >> salary2;
    cout << "salary 3:";
    cin >> salary3;


    if (!ifs){
        cerr <<"File open error \n";
        exit(0);

    }
    sum = salary1+ salary2+ salary3;
    avg = sum/2;
    tsum +=sum;

    cout << "Total sum :\t"<< tsum <<"\t" <<"Average:\t"<<avg<<endl;
    
}