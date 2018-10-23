#include <iostream>

using namespace std;

int main()
{
    int accountNumber;
    double balance, charges, credits, limit;
    cout<<"Enter account number (-1 to end):";
    cin>>accountNumber;
    while(accountNumber != -1)
    {
        cout<<"Enter beginning balance: ";
        cin>>balance;
        cout<<"Enter total charges: ";
        cin>>charges;
        cout<<"Enter total credits: ";
        cin>>credits;
        cout<<"Enter credits limit: ";
        cin>>limit;
        balance += charges - credits;
        cout<<"New balance is "<<balance<<endl;
        if(balance > limit)
        cout<<"Account: "<<accountNumber<<endl<<"Credit limit: "<<limit<<endl<<"Balance: "<<balance<<endl<<"Credit Limit Exceeded."<<endl;

        cout<<"Enter account number (-1 to end): ";
        cin>>accountNumber;
    }
    return 0;
}
