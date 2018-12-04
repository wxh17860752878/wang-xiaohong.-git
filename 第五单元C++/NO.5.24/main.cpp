#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,j,m;
    int side;
    cin>>side;
    while(side%2==1)
    {
        if(side<=19)
        {
            for(i=1;i<=side;i++)
            {
                if(i<(side+1)/2)
                    m=i;
                else
                    m=side+1-i;
                    for(j=1;j<=side-m;j++)
                        cout<<" ";
                    for (j=1;j<=2*m-1;j++)
                        cout<<"*";
                    cout<<"\n";
            }

        }
    }
    return 0;
}

