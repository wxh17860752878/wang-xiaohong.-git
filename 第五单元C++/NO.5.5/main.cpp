#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m;
    int number;
    int sum = 0;
    double Average = 0;
    cin>>number;
    for ( int i=0;i <number;i++ )
    {
        cin>>m;
        sum+=m;
        Average = sum*1.0/number;
    }
    cout<<"Average is "<<Average<<endl;


    return 0;
}
