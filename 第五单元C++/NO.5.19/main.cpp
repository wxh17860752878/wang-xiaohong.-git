#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m;
    int pi;
    cout<<"m\tpi\n";
    for(int i=1;i<=1000;i++)
    {
        for(int m=1;m<=1000;++m)
         cout<<m<<"\n";
         int a,x,y;
         a=pow(x,y);
         x=-1;
         y=i-1;
         pi+=a*4/((2*i)-1);
         cout<<pi<<"\n";
    }
}
