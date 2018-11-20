#include <iostream>
#

using namespace std;

int main()
{
    int counter=0;
    int number;
    int largest=0;
    while (counter<10)
    {
        cin>>number;
        if(largest<number)
            largest=number;
        counter++;
    }
    cout<<"largest number: "<<largest<<endl;
    return 0;
}
