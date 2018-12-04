#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    {
        array<array< int,2>,3>t;
        t[1][1],t[1][2],t[1][3];
        t[2][1],t[2][2];

    }
    {
        array<array< int,2>,3>t;
        t[1][2]=0;
    }
    {
         array<array< int,2>,3>t={0,0,0,0,0,0};
    }

    {
        array<array< int,2>,3>t;
        for( size_t row =0;row<t.size();++row)
           for( size_t column =0;column<t.size();++column)
               t[row][column]=0;
        cout<<"             [0]  [1]  [2]"<<endl;

        for( size_t i=0;i<2;++i)
        {
            cout<<'['<<i<<"]";
            for(size_t j=0;j<3;++j)
                cout<<setw(13)<<t[i][j]<<" ";
            cout<<endl;
        }

    }
    {
        const size_t arraySize=20;
        array<int,arraySize>n;
        int number;
        for(int j=0; j<20; j++)
        {
            cin>>number;
        }
        cout<<"Element"<<setw(13)<<"Value"<<endl;

        for( size_t i=0; i<20; ++i)
        cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
    }
    {
        array<double,99>w;
        int Min,Max,i,j;
        cout<<Min<<" "<<Max<<endl;
            Min>w[i];
            Min=w[i];
        cout<<"Min is "<<Min<<endl;
    }





}
