#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include "matrix.h"
#include "iostream.h"


class Matrix
{
    matrix()
    {
        for(int i=0;i<h;i++)
            for(int j=0;j<k;j++)
               m[i][j]=0;
    }
    friend Matrix &operator+(matrix& a,matrix &b);
    friend ostream &operator<<( ostream & os, Matrix &y);
    friend istream &operator>>( istream & is, Matrix &x);
private:
    int m[h][k];
}

#endif // MATRIX_H
