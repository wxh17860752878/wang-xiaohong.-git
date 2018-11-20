#include <iostream>

using namespace std;

int main()
{
    int N=1;
    double I,J,K;
    cout<<"N\t10*N\t100*N\t1000*N"<<endl;
    while ( N <=5)
    {
        I=10*N;
        J=100*N;
        K=1000*N;
        cout<<N<<"\t"<<I<<"\t"<<J<<"\t"<<K<<endl;
        N = N+1;
    }
    return 0;
}
