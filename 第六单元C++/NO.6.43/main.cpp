//Exercise 6.43:ex06_43.cpp
//What is wrong with this program
#include <iostream>
using namespace std;

int main()
{
    int c=0;
    if((c=cin.get())!=EOF)//EOF����һ���в�������˴�Ӧ��һ���������ͷ�ļ�
    {
        main();
        cout<<c;
    }//end if
}//end main
