#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double Min(double a,double b,double c)
{
    double max,mid,min;
    double tmp;
    if(a>b)
    {
        max = a;
        mid = b;
    }else
    {
        max = b;
        mid = a;
    }
    if(c > max)
    {
      tmp = max;
      max = c;
      c = mid;
      mid = tmp;
      min =  c;
    }else if(c > mid)
    {
        tmp = mid;
        mid = c;
        min = tmp;
    }else
    {
        min =c;
    }
    return min;
}
int main()
{
     double a,b,c;
     cin>>a>>b>>c;
         cout<<Min(a,b,c);
}
