#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int mystery(int a,int b)
{
    if(b>=0)
    {
        if(1==b)
            return a;
        else
            return a+mystery(a,b-1);
    }
    else
    {


            if(-1==b)
            return -a;
        else
            return -a+mystery(a,b+1);


    }
}
int main()
{
    int x=0;
    int y=0;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    cout<<"The result is "<<mystery(x,y)<<endl;
}
