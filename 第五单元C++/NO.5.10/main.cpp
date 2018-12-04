#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int factorial =1;
    for (int i=1;i<=5;i++)
    {
        factorial *= i;
        cout<<i<<"\t"<<factorial<<"\n"<<endl;
    }
}
