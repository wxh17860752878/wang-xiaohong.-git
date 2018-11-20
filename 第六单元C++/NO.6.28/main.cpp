#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int isperfect()
{
    int n=1000;
    int r,j,i;
    cout<<r<<endl;
    for(i=1; i<=n; i++)
    {
        r = 0;
        for(j=1; j<i; j++)
        {
            if(i%j == 0)
            {
                r = r + j;
            }
        }
        if(r == i)
        {
            cout<<r<<endl;
        }
    }
}
int isperfect(int number)
{
    int r,j;
        r = 0;
        for(j=1; j<number; j++)
        {
            if(number%j == 0)
            {
                r = r + j;
            }
        }
        if(r == number)
        {
            cout<<r<<endl;
        }
        else
            cout<<r<<endl;

}
int main()
{
    isperfect();
    int num;
    int x;
    cout<<x;
    cin>>num;
    isperfect(num);
    return 0;
}
