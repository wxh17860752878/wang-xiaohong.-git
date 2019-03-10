#include <iomanip>
#include "Matrix.h"

using namespace std;

matrix operator+(matrix& a,matrix& b)
{
    matrix c;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        c.m[i][j]=a.m[i][j]+b.m[i][j];
    }
}
ostream &operator <<( ostream &os, Matrix &y)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
              os<<y.m[i][j]<<"";
        cout<<endl;
    }
    return os;
}

istream &operator>>( istream &is, matrix&x )
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            is>>x.m[i][j];
    }
    return is;
}

