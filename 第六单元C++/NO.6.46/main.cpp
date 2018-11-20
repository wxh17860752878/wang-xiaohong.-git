#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n,n1;
    double x,y,h,k,w,m,l,f,d,c,a;
    cin>>n>>n1;
    x= ceil(n);
    cout<<"x is"<<x<<endl;
    y= cos(n);
    cout<<"y is"<<y<<endl;
    h=exp(n);
    cout<<"h is"<<h<<endl;
    k=floor(n);
    cout<<"k is "<<k<<endl;
    w=log(n);
    cout<<"w is "<<w<<endl;
    m=log10(n);
    cout<<"m is "<<m<<endl;
    l=sin(n);
    cout<<"l is "<<l<<endl;
    f=tan(n);
    cout<<"f is "<<f<<endl;
    c=fmod(n,n1);
    cout<<"c is "<<c<<endl;
    a=pow(n,n1);
    cout<<"a is "<<a<<endl;
    d=sqrt(n);
    cout<<"d is "<<d<<endl;
    return 0;
}

