#include <iostream>

using namespace std;

void fillCharacter(int side)
{
    int i,j;
    for(i=1;i<=side;i++)
        {
            for (j=1;j<=side;j++)
            {
                cout<<"#";
            }
            cout<<"\n";
        }
}

int main()
{
    int side;
    cin>>side;
    fillCharacter(side);
    return 0;
}
