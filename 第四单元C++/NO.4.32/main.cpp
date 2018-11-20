#include <iostream>

using namespace std;

int main()
{
    double number1;
    double number2;
    double number3;
    if ( number1 >0 &&number2>0&&number3>0)
    {
        cout<<"number1 is "<<endl;
        cin>>number1;
        cout<<"number2 is "<<endl;
        cin>>number2;
        cout<<"number3 is "<<endl;
        cin>>number3;
        if ( (number3+number2)>number1&&(number3+number1)>number2&&(number1 + number2) > number3 )
            cout<<"it is right";
        else
            cout<<"it is false";
    }
    return 0;
}
