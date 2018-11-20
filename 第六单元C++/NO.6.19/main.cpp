#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    while(a>0&&b>0&&c>0)
    {
        cout<<"a is "<<endl;
        cin>>a;
        cout<<"b is "<<endl;
        cin>>b;

        c = sqrt( a*a+b*b);
        cout<<"c is "<<c<<endl;
    }
    return 0;
}
