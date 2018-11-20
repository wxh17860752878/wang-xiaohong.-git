#include <bits/stdc++.h>
using namespace std;

double celsius(double f)
{
    return 32+f*1.8;
}

double fahrenheit(double c)
{
    return (c-32)/1.8;
}

int main()
{
    cout<<left<<setw(15)<<"Fahrenheit"<<setw(15)<<"Celsius"<<setw(15);
    cout<<left<<setw(15)<<"Fahrenheit"<<setw(15)<<"Celsius"<<setw(15);
    cout<<left<<setw(15)<<"Fahrenheit"<<setw(15)<<"Celsius"<<setw(15);
    cout<<left<<setw(15)<<"Fahrenheit"<<setw(15)<<"Celsius"<<setw(15)<<endl;
    for(int i = 0; i <= 100; i++)
    {
        cout<<left<<setw(15)<<i<<setw(15)<<fixed<<setprecision(1)<<celsius(i);
        if((i+1)%4==0)cout<<endl;

    }
    cout<<endl;
    cout<<left<<setw(15)<<"Celsius"<<setw(15)<<"Fahrenheit"<<setw(15);
    cout<<left<<setw(15)<<"Celsius"<<setw(15)<<"Fahrenheit"<<setw(15);
    cout<<left<<setw(15)<<"Celsius"<<setw(15)<<"Fahrenheit"<<setw(15);
    cout<<left<<setw(15)<<"Celsius"<<setw(15)<<"Fahrenheit"<<setw(15)<<endl;;

    for(int i = 32; i <= 212; i++)
    {
        cout<<left<<setw(15)<<i<<setw(15)<<fixed<<setprecision(1)<<fahrenheit(i);
        if((i+1)%4==0)cout<<endl;

    }
    return 0;
}
