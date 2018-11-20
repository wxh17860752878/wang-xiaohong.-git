#include <iostream>
#include <cmath>

using namespace std;

void pic(int side)
{
    int i,j;
    for(i=1;i<=side;i++)
        {
            for (j=1;j<=side;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
}

int main()
{
    int side;
    cin>>side;
    pic(side);
    return 0;
}
