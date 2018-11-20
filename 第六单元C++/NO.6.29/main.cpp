#include <iostream>
#include <cmath>

using namespace std;

int sushu(int value)
{
      for(int i=2; i <= sqrt(value); i++)
             if(value%i==0) return 0;
       return 1;
}

int main()
{
       int num=0;
       for(int i=2; i<=10000; i++)
              if(sushu(i))
              {
                     num++;
                     cout<<i<<" ";
               }
       cout<<endl;
       cout<<"num: "<<num;
}
