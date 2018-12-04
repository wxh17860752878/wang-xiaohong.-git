#include <iostream>
#include <cmath>

using namespace std;

void pic(int side)
{
    int i,j,m;
    for(i=1;i<=side;i++)
        {
            for (j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }

    for(i=side;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(i=1;i<=side;i++)
    {
        for(j=0;j<i-1;j++)
        {
            cout<<" ";
        }
        for (m=0;m<side-j;m++)
        {
            cout<<"*";
        }
         cout<<"\n";

    }
    for ( i=1;i<=side;i++)
    {
        for (j=side;j<=side-i;j++)
        {
            cout<<" ";
        }
        for ( m=1;m<=i;m++)
        {
            cout<<"*";
        }


        cout<<endl;
    }
}

int main()
{
    int side;
    cin>>side;
    pic(side);
    return 0;
}
