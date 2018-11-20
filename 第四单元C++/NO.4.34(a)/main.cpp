#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned long );

int main()
{
    int n;
    int factorial;
    cout<<"n="<<endl;
    cin>>n;
    factorial = 1;
    for(unsigned int counter=n;counter>=1;--counter)
        factorial *= counter;
        cout<<"result is "<<factorial<<endl;
}
