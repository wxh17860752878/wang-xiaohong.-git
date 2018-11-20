//Exercise 6.43:ex06_43.cpp
//What is wrong with this program
#include <iostream>
using namespace std;

int main()
{
    int c=0;
    if((c=cin.get())!=EOF)//EOF在这一段中不清楚，此处应加一个运算符的头文件
    {
        main();
        cout<<c;
    }//end if
}//end main
