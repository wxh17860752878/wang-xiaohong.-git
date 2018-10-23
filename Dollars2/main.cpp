#include <iostream>

using namespace std;

int main()
{
    int remuneration;
    double dollars;
    double Salary;
    while (dollars!=-1)
    {

        cout<<"enter sales in dollars(-1 to end): "<<endl;
        cin>>dollars;

        Salary=dollars*0.09;
        cout<<"Salary is "<<Salary<<endl;

    remuneration=200+Salary;

    cout<< "Remuneration is "<<remuneration <<endl;
    }
    return 0;
}
