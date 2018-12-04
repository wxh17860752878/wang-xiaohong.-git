#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m;
    int sum = 0;
    double Average = 0;
    for ( int i=0;i <4;i++ )
    {
        cin>>m;
        sum+=m;
        Average = sum*1.0/4;
    }
    cout<<Average<<endl;
    int n,t,h,d,p;
    t=n/1000;
    h=(n-t*1000)/100;
    d=(n-t*1000-h*100)/10;
    p=n%10;
    t=h=d=p=Average;
    cout<<t<<h<<d<<p<<endl;
    return 0;
}
