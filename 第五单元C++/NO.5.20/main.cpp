#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count=0;
    int side1,side2,hypotenuse;
    int a,b;

    cout<<"side1\tside2\thypotenuse"<<endl;
    for(side1=1;side1<=500;side1++)
    {
        for(side2=1;side2<=500;side2++)
        {
            for(hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {
                a=hypotenuse*hypotenuse;
                b=side1*side1+side2*side2;
                if (a==b)
                    cout<<side1<<"\t"<<side2<<"\t"<<hypotenuse<<"\n";
                    count++;
            }
        }

    }
    return 0;
}
