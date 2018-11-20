#include <iostream>
#include <cmath>

using namespace std;

void distance()
{
    double x1,y1,x2,y2;
    double r;
    r = sqrt((x2-x1)/(y2-y1));
    cout<<"r = "<<r<<endl;
}

int main()
{
    double x1,y1,x2,y2,r;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    r = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"r is "<<r<<endl;
    return 0;
}
