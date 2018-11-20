#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    unsigned int counter={1};
    int x;
    int y;
    x= 1+rand()%1000;
    cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess"<<endl;
    while (counter<10)
    {
        while (y!=x)
        {
            cout<<"y is "<<endl;
            cin>>y;
            if(y>x)
            {
                cout<<"Too high. Try again";
            }
            else
                if(y=x)
                {
                    cout<<"Excellent! You guessed the number!\nWould you like to play again(y or n)"<<endl;
                }
                else
                    cout<<"Too low. Try again";
        }
        cin>>y;
        return 0;

        counter=counter+1;
    }
    cout<<"Either you know the secret or you got lucky";
    while (counter=10)
    {
        while (y!=x)
        {
            cout<<"y is "<<endl;
            cin>>y;
            if(y>x)
            {
                cout<<"Too high. Try again";
            }
            else
                if(y=x)
                {
                    cout<<"Excellent! You guessed the number!\nWould you like to play again(y or n)"<<endl;
                }
                else
                    cout<<"Too low. Try again";
        }
        cin>>y;
        return 0;
        counter=counter+1;
    }
    cout<<"Ahah!You know the secret";
    while (counter>10)
    {
        while (y!=x)
        {
            cout<<"y is "<<endl;
            cin>>y;
            if(y>x)
            {
                cout<<"Too high. Try again";
            }
            else
                if(y=x)
                {
                    cout<<"Excellent! You guessed the number!\nWould you like to play again(y or n)"<<endl;
                }
                else
                    cout<<"Too low. Try again";
        }
        cin>>y;
        return 0;
        counter=counter+1;
    }
    cout<<"You should be able to do better";

    return 0;
}
