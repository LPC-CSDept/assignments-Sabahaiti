#include  <iostream>
using namespace std;

int main()
{
    int regular_hours, work_hours, overtime_hours; 
    double regular_rate; 
    double overtime_rate;
    double total_wage;

    regular_hours=40;
    regular_rate=18.25;
    overtime_rate=27.78;
    overtime_hours=work_hours - regular_hours;

    total_wage= regular_hours * regular_rate + overtime_hours* overtime_rate;
    cout << "Total wage of the employee is" << total_wage << endl;

    return 0;

}
