#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    {
        array <int,6> alphabet={1,2,3,4,5,6};
        cout<<"Alphabet"<<alphabet[6]<<endl;
    }
    {
        const size_t arraySize =4;
        array <int,arraySize> grades;
    }
    {
        array <int,5>n={8,8,8,8,8};
        cout<<"Element"<<setw(13)<<"Value"<<endl;
        for(size_t i =0;i<n.size();i++)
            cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
    }
    {
        const size_t arraySize = 100;
        array<int,arraySize>temperatures;
        int total;
        for( size_t i =0;i< temperatures.size();++i)
           total+=temperatures[i];
        cout<<"Total of array elements: "<<total<<endl;
    }
    {
        array <double,11>a;
        cout<<"Enter number"<<a[11]<<endl;
        array<double,34>b;
        int i;
        for (int i=0;i<=11;i++)
        {
            b[i]=a[i];
        }
        cout<<"Enter number"<<b[i]<<" "<<b[i+1]<<endl;
    }
    {
        array<double,99>w;
        int Min,Max,i,j;
        cout<<Min<<" "<<Max<<endl;
            Min>w[i];
            Min=w[i];
            Max<w[j];
            Max=w[j];
        cout<<"Min is "<<Min<<endl;
        cout<<"Max is "<<Max<<endl;
    }




}
