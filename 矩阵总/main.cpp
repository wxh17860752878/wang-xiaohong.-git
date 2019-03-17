#include <iostream>
#include "Matrix.h"


using namespace std;

int main(int argc,char*argv[])
{
    Matrix a,b,d,e;
    int number;

    cout<<"Please input value of matrix a:"<<endl;
    cin>>a;
    cout<<"Please input value of matrix a:"<<endl;
    cin>>b;
    matrix c;
    c=a+b;
    d=a*b;
    e=a-b;;
    cout<<a;
    cout<<b;
    cout<<c;
    cout<<d;
    cout<<e;

    return 0;
}
