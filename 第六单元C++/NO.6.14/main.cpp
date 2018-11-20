#include <iostream>
#include <cmath>

using namespace std;
int roundToInteger(int number )
    {
        return floor( number + 0.5);
    }
    double roundToTenths (double  number )
    {
        return floor( number*10 + 0.5 )/10;
    }
    double roundToHundresths(double number )
    {
        return floor( number* 100 + 0.5 )/100;
    }
    double roundToThousandths(double number )
    {
        return floor( number*100 + 0.5 )/1000;
    }
int main()
{
    double number;

    cin>>number;

    cout<<"number = "<<number<<endl;

    cout<<"roundToInteger( number ) is "<<roundToInteger( number )<<endl;
    cout<<"roundToTenths ( number ) is "<<roundToTenths ( number )<<endl;
    cout<<"roundToHundresths( number ) is "<<roundToHundresths( number )<<endl;
    cout<<"roundToThousandths( number ) is "<<roundToThousandths( number )<<endl;

    return 0;
}
