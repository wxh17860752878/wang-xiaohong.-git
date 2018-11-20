#include <iostream>

using namespace std;

int fibonacci(int h);

int main()
{
    for (unsigned int counter = 0;counter<= 10;++counter )
        cout<<"fibonacci("<<counter<<")="<<fibonacci(counter)<<endl;

    cout<<"\nfibonacci(20) = "<<fibonacci(20)<<endl;
    cout<<"fibonacci(30) = "<<fibonacci(30)<<endl;
    cout<<"fibnacci(35) = "<<fibonacci(30) <<endl;
}
int fibonacci(int h)
{
    int i,a=1;
    cout<<"number you wanted";
    cin>>i;
    int h1=1;
    while (a<=i)
    {
         a++;
         if(a<i-1)
         {
             h1=h1+h;
         }
         a++;
     }
    cout<<"fibonacci("<<i<<")"<<"="<<h;
    return 0;
}
