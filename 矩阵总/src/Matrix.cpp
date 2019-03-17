#include <iomanip>
#include "Matrix.h"

using namespace std;

matrix operator+(matrix& a,matrix& b)
{
    matrix d;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<k;j++)
        d.m[i][j]=a.m[i][j]*b.m[i][j];
    }
}
matrix operator+(matrix& a,matrix& b)
{
    matrix c;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<k;j++)
        c.m[i][j]=a.m[i][j]+b.m[i][j];
    }
}
matrix operator+(matrix& a,matrix& b)
{
    matrix e;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<k;j++)
        e.m[i][j]=a.m[i][j]-b.m[i][j];
    }
}
ostream &operator <<( ostream &os, Matrix &y)
{
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<k;j++)
              os<<y.m[i][j]<<"";
        cout<<endl;
    }
    return os;
}

istream &operator>>( istream &is, matrix&x )
{
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<k;j++)
            is>>x.m[i][j];
    }
    return is;
}

