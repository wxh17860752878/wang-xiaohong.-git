#include <iostream>

using namespace std;

int main()
{
    bool num[1000];
    for(int i = 1; i < 1000; i ++)
        num[i] = true;
    for(int i = 2; i < 1000; i ++)
        if(num[i] == true)
            for(int j = 2; i * j < 1000; j ++)
                    num[i * j] = false;
    for(int i = 1; i < 1000; i ++)
        if(num[i] == true)
            cout << i << endl;
     system("PAUSE");
     return 0;
}
