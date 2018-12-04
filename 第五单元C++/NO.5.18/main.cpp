#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int bin,oct,dec,hex;
    cout<<"dec\tbin\toct\thex\n";
    for(unsigned int i =1;i<=256;++i)
    {
        cout<<i<<"\n";
        int h,d,p;
        h=i/100;
        d=(i-h*100)/10;
        p=i%10;
        if(i>100&&h!=0||i<100&&d!=0||i<10&&p!=0)
        {
            cout<<i<<"\n";
            i++;
            bin=i%2;
            oct=i%8;
            hex=i%16;
            cout<<bin<<"\t";
            cout<<oct<<"\t";
            cout<<hex<<"\t";
        }
    }
}
