#include <iostream>
using namespace std;

int mystery( int,int);//function prototype

int main()
{
    int x =0;
    int y =0;

    cout<<"Enter two integers: ";//接连输出两个值
    cin>>x>>y;
    cout<<"the result is "<<mystery(x,y)<<endl;//调用了函数
}//end main

//Parameter b must be a positive integer to prevent infinite recursion
int mystery( int a,int b)//构造了一个名为mystery的函数
{
    if(1==b)//base case拿b的值与1进行比较若b和1一样大
        return a;//返回a
    else//recursion step
    return a+ mystery(a,b-1);//返回函数且b=b-1
}//end function mystery

