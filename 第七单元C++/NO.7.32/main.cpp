#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
const int MAXRANGE=1000;
int recursiveMinimum(const int[],int,int );

int main()
{
    const int arraySize=10;
    int array[arraySize];
    int smallest;

    srand(time(0));

    for(int loop =0;loop<arraySize;loop++)
        array[loop]=1+rand()%MAXRANGE;
        cout<<"Array members are:\n";

    for(int k=0;k<arraySize;k++)
        cout<<setw(5)<<array[k];
    cout<<'\n';
    smallest=recursiveMinimum(array,0,arraySize-1);
    cout<<'\nSmallest element is :'<<smallest<<endl;
    system("pause");
    return 0;
}

int recursiveMinimum(const int array[],int low,int high)
{
    static int smallest=MAXRANGE;
    if(array[low]<smallest)
        smallest=array[low];
    return low=high?
        smallest:recursiveMinimum(array,low+1,high);
}
