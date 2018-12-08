#include <iostream>

using namespace std;

void mystery1( char*,const char * );

int main()
{
    char string1[ 80 ];
    char string2[ 80 ];

    cout<<"Enter tow strings: ";
    cin>>string1>>string2;
    mystery1( string1,string2);
    cout<<string1<<endl;
}

void mystery1(char *s1,const char *s2)
{
    while( *s1!='\0')
        ++s1;

    for(;( *s1=*s2 ); ++s1,++s2)
        ;
}//把输入的两个数的数字拼起来凑成一个数，数位是第一个加上第二个
