#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    if ( a >0 &&b>0&&c>0)
    {
        cout<<"a is "<<endl;
        cin>>a;
        cout<<"b is "<<endl;
        cin>>b;
        cout<<"c is "<<endl;
        cin>>c;
        if ( a*a+b*b==c*c||a*a+c*c==b*b||b*b + c*c == a*a )
            cout<<"it is right";
        else
            cout<<"it is false";
    }
    return 0;
}
