#include <iostream>

using namespace std;

int main()
{
    int value1=200000;
    long *longPtr;
    *longPtr=value1;
    cout<<"*longPtr = "<<value1<<'\n';

    int value2;
    value2=*longPtr;
    cout<<"value2 = "<<*longPtr<<'\n';
    cout<<"value1 = "<<value1<<'\n';
    if(*longPtr=value1)
        cout<<"TURE";
    else
        cout<<"false";
}
