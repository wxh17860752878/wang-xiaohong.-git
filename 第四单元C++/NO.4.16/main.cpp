#include <iostream>

using namespace std;

int main()
{
    int HoursWorked;
    double HoursRate, Salary;
    cout<<"Enter HoursWorked (-1 to end): "<<endl;
    cin>>HoursWorked;

    while ( HoursWorked != -1 )
    {
        cout<<"Enter HoursRate of the employee($00.00): "<<endl;
        cin>>HoursRate;
        if(HoursWorked <= 40)
        {
            Salary = HoursWorked*HoursRate;
            cout<<" Salary is "<<Salary<<endl;
        }
        else
            Salary = HoursWorked*HoursRate+(HoursWorked-40)*5;
            cout<<" Salary is "<<Salary<<endl;
        cout<<"Enter HoursWorked (-1 to end): "<<endl;
        cin>>HoursWorked;
    }
    return 0;
}
