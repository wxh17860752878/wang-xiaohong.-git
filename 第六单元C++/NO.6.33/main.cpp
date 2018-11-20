#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int filp()
{
    return rand()%2;
}
int main()
{
    int counter=0;
    int i=0;
    int j=0;
    while (counter<100)
    {
        if(filp()==0)
        {
            i++;
            cout<<"Tail\n";
        }
        else
            j++;
            cout<<"Head\n";
        counter++;
    }
    cout<<i<<j;

    return 0;
}
