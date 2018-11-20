#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,t,h,d,p,m;
    cin>>n;

    t = n/1000;
    h = (n-t*1000)/100;
    d = (n-t*1000-h*100)/10;
    p = n%10;
    m = p*1000+d*100+h*10+t;

    cout<<"m is "<<m<<endl;
    return 0;
}
