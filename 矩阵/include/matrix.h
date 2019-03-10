#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>


class Matrix
{
    friend std::ostream &operator<<( std::ostream &, const Matrix & );
    friend std::istream &operator>>( std::istream &, Matrix & );
private:
    std::string areaCode;//3-digit area code
    std::string exchange;//3-digit exchange
    std::string line;//3-digit line
};

#endif // MATRIX_H
