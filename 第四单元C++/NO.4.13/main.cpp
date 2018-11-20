#include <iostream>


#include<bits/stdc++.h>
using namespace std;

int main()
{
    double miles;
    double gallons;
    double sumMiles = 0;
    double sumGallons = 0;
    while(1)
    {
        cout<<"Enter miles driven(-1 to quit): ";
        cin>>miles;
        if(miles == -1) break;
        else{
            cout<<"Enter gallons used: ";
            cin>>gallons;
            sumMiles+=miles;
            sumGallons+=gallons;
        }
        cout<<"MPG this trip: "<<miles/gallons<<endl;
        cout<<"Total MPG: "<<sumMiles/sumGallons<<endl;
    }
    return 0;
}

