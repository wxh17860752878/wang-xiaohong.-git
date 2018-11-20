#include <bits/stdc++.h>
using namespace std;

double calculateCharges(double hours)
{
    double charge;
    if(hours<=3)
        charge = 2;
    else{
        int h = (int)hours;
        if(h < hours)
            hours = h+1;
        charge = 2+(hours-3)*0.5;
        if(charge > 10)
            charge = 10;
    }
    return charge;
}

int main()
{
    double h;
    double hours[4], charge[4];
    double totalh = 0, totalc = 0;
    int i;
    for(i = 1; i < 4; i++)
    {
        cin>>hours[i];
        charge[i] = calculateCharges(hours[i]);
        totalh+=hours[i];
        totalc+=charge[i];
    }

    cout<<left<<setw(5)<<"Car"<<right<<setw(8)<<"Hours"<<setw(10)<<"Charges"<<endl;
    for(i = 1; i < 4; i++)
        cout<<left<<setw(5)<<i<<right<<setw(8)<<fixed<<setprecision(1)<<hours[i]<<right<<setw(10)<<fixed<<setprecision(2)<<charge[i]<<endl;

    cout<<left<<setw(5)<<"TOTAL"<<right<<setw(8)<<fixed<<setprecision(1)<<totalh<<right<<setw(10)<<fixed<<setprecision(2)<<totalc<<endl;
    return 0;
}

