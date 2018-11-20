#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum=1;
int integerPower(int base,int exponent)
{

    if(exponent!=1)
    {
            sum*=base;
            integerPower(base,exponent-1);
    }
    else if(exponent==1)
        return sum*base;

}
int main()
{
    unsigned int base;
    int exponent;
    cin>>base;
    cin>>exponent;
    cout<<integerPower(base,exponent);
}
