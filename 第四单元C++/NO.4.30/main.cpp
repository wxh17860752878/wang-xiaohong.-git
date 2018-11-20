#include <iostream>
using namespace std;

int main()
{
    double R;
    double diameter,perimeter;
    double area;

    while ( R>0 )
    {
        cout<<"The R is: "<<endl;
        cin>>R;
        diameter = R*2;
        perimeter = 2*3.14159*R;
        area = (R*R)*3.14159;
        cout<<"diameter is "<<diameter<<endl;
        cout<<"perimeter is "<<perimeter<<endl;
        cout<<"area is "<<area<<endl;
    }
    return 0;
}
