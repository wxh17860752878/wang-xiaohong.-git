#include <iostream>

using namespace std;

int main()
{
    bool breakout=false;
    for ( int count=1;count<=10&&(!breakout);count++)
    {
        if (count==5)
            continue;
        else
            cout<<count<<" ";
    }
    cout<<"\nbroke out of test"<<"(!breakout ) failed."<<endl;
}
