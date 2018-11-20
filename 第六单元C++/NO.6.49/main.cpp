#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double circleArea(double r)
{
    return r*r*3.14;
}
int main()
{
    double r;
    cin>>r;
    cout<<circleArea(r)<<endl;
}
