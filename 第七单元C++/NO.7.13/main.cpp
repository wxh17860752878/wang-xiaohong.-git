#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    const size_t arraySize=20;
    array<int,arraySize>n;
    int cnt=0;
    int num;
    for(int j=0; j<20; j++)
    {
        cin>>num;
        if(num>=10&&num<=100)
        {
            int ok=1;
            for(int k=0; k<j; k++)
            {
                if(num==n[k])
                {
                    ok=0;
                    break;
                }
            }
            if(ok)
            {
                n[cnt]=num;
                cnt++;
            }
        }

    }
   cout<<"Element"<<setw(13)<<"Value"<<endl;

    for( size_t i=0; i<cnt; ++i)
        cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;


}

