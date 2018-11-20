#include <iostream>

using namespace std;

void multiple()
{
    int x,y;
    y%x==0;

}

int main()
{
    int x;
    int y;
    int n;
    cout<<"x is "<<endl;
    cin>>x;
    cout<<"y is "<<endl;
    cin>>y;
    while ( x!=0&&y!=0)
    {
        if ( y%x == 0)
            cout<<"ture";
        else
            cout<<"False";
            break;
    }
    return 0;
}

