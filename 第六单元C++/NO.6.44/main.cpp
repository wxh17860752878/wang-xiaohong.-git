#include <iostream>
using namespace std;

int mystery( int,int);//function prototype

int main()
{
    int x =0;
    int y =0;

    cout<<"Enter two integers: ";//�����������ֵ
    cin>>x>>y;
    cout<<"the result is "<<mystery(x,y)<<endl;//�����˺���
}//end main

//Parameter b must be a positive integer to prevent infinite recursion
int mystery( int a,int b)//������һ����Ϊmystery�ĺ���
{
    if(1==b)//base case��b��ֵ��1���бȽ���b��1һ����
        return a;//����a
    else//recursion step
    return a+ mystery(a,b-1);//���غ�����b=b-1
}//end function mystery

