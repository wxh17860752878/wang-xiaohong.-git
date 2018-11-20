#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x;
    int y;
    x= 1+rand()%1000;
    cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess"<<endl;
    while (y!=x)
    {
        cout<<"y is "<<endl;
        cin>>y;
        if(y>x)
        {
            cout<<"Too high. Try again";
        }
        else
            cout<<"Too low. Try again";
        }
        cin>>y;
    return 0;
    while(y==x)
    {
        cout<<"Excellent! You guessed the number!\nWould you like to play again(y or n)"<<endl;
    }

    return 0;
}
