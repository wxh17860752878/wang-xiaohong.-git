#include <iostream>

using namespace std;

int main()
{
    int m;
    int number;
    int small;
    cin>>number;
    for ( int i=0;i<number;i++)
    {
        cin>>m;
        if(small>m)
            small=m;
    }
    cout<<"small number: "<<small<<endl;
    return 0;
}
