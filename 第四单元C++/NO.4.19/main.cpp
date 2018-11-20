#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number;
    int largest1=0;;
    int largest2=0;
    while (counter<10)
    {
        cin>>number;
        if(largest1<number)
            largest2=largest1;
            largest1=number;
        counter++;
    }
    cout<<"largest1 number: "<<largest1<<endl;
    cout<<"largest2 number: "<<largest2<<endl;
    return 0;
}

