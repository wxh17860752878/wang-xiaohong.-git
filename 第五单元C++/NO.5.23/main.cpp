#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,j,m;
    for(i=1;i<=9;i++)
    {
        if(i<5)
            m=i;
        else
            m=10-i;
        for(j=1;j<=10-m;j++)
            cout<<" ";
        for (j=1;j<=2*m-1;j++)
            cout<<"*";
        cout<<"\n";
    }
}
