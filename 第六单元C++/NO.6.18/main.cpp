#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int integerPower(int base,int exponent)
{
    int sum;
    sum=base;
    for(int i=1;i<exponent;i++)
    {
        sum*=base;
    }
    return sum;
}
int main()
{

    unsigned int base;
    int exponent;
    cin>>base;
    cin>>exponent;
    cout<<integerPower(base,exponent);
}
