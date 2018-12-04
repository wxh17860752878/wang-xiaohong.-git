#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int pro = 1;
    unsigned int i;
    for (int i=1;i<15;++i)
    {
        if(i%2==1)
        {
            cout<<i<<" ";
            pro*=i;
        }
    }
    cout<<pro<<endl;
}
