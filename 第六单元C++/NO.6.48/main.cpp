#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollOfDice();

int main()
{
    int bankBalance=1000;
    double wager;
    cout<<"wager is "<<endl;
    cin>>wager;
    while (wager<=bankBalance)
    {
        cin>>wager;
        if(rollOfDice()==1)
        {
            bankBalance=bankBalance+wager;
            cout<<bankBalance;
        }
        else
        {
            if(rollOfDice()==0)
            {
                bankBalance=bankBalance-wager;
                cout<<bankBalance;
                if(bankBalance==0)
                    cout<<"Sorry.You busted!";
            }
         }
    }
    return 0;
}
    unsigned int rollOfDice()
    {
        unsigned int die1= 1+rand()%6;
        unsigned int die2= 1+rand()%6;

        unsigned int sum = die1+die2;
        cout<<"Player rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
        return sum;
    }


