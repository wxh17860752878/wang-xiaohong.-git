#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int tripleByValue(int &cnt)
{
    return cnt*3;
}
int tripleByReference(int cnt)
{
    return cnt*3;
}
int main()
{
    int cnt;
    cin>>cnt;
    cout<<tripleByReference(cnt)<<endl;
    cout<<tripleByValue(cnt)<<endl;
}

