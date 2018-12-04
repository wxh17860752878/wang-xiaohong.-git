#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array<int,10>counts;
    for( size_t i =0;i<counts.size();++i)
        counts[i]=0;
    cout<<"Element"<<setw(13)<<"Value"<<endl;

    for( size_t j=0;j<counts.size();++j)
        cout<<setw(7)<<j<<setw(13)<<counts[j]<<endl;

    const size_t arraySize = 15;
    array< int,arraySize>bouns;
    for (size_t i =0;i<bouns.size();++i)
        bouns[i]=i+1;
    cout<<"element"<<setw(13)<<"Value"<<endl;
    for(size_t j =0;j<bouns.size();++j)
        cout<<setw(7)<<j<<setw(13)<<bouns[j]<<endl;

    double monthyTemperatures[15];
    for(int m =0;m<12;m++)
    {
        cin>>monthyTemperatures[m];
    }


    array<int,5>bestScores;
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t k=0;k<bestScores.size();++k)
         cout<<setw(7)<<k<<setw(13)<<bestScores[k]<<endl;

}
