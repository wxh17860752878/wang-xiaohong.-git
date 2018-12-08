#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    unsigned int valuse[5]={2,4,6,8,10};
    unsigned int *vPtr=valuse;

    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(int j=0;j<5;++j)
        cout<<setw(7)<<j<<setw(13)<<valuse[j]<<endl;
    vPtr =&valuse[0];

    cout<<"\nPointer/offset notation\n";
    for(size_t k=0;k<5;++k)
        cout<<"*(vPtr + "<<k<<")="<<*(vPtr+k)<<'\n';

    cout<<"\nPointer subscript notation\n";
    for(int h=0;h<5;++h)
        cout<<"vPtr["<<h<<"]="<<vPtr[h]<<'\n';

     cout<<"\nPointer/offset notation where"<<" the pointer is the array name\n";
     for(size_t r =0;r<5;++r)
        cout<<"*(valuse + "<<r<<")="<<*(valuse+r)<<'\n';
}
