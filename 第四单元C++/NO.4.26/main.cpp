#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     int a,b,c,d,e,f;

     cin>>f;
     a = f/10000;
     b = (f-a*10000)/1000;
     c = (f-a*10000-b*1000)/100;
     d = (f-a*10000-b*1000-c*100)/10;
     e = f%10;
     if(c>=b&&b==d&&b>=a&&a==e)
        cout<<"it is right"<<endl;
     else
        cout<<"it is false"<<endl;
     return 0;
}
