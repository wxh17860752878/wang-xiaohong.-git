#include <iostream>
#include <iomanip>
#include <array>
#include <cstdlib>

using namespace std;

int num()
{
    int n,m,k;
    n=1+rand()%6;
    m=1+rand()%6;
    return k=n+m;
}
int main()
{
    int m;
    int n=36000;
    int a[13];
    while(n>0)
    {
        m=num();
        a[m]++;
        n--;
    }
    for(int k=2;k<=12;k++)
    {
        cout<<"time"<<a[k]<<"\n";
    }
    return 0;
}
