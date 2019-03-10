#include <iomanip>
#include "Matrix.h"

using namespace std;

ostream &operator <<( ostream &output, const Matrix &number )
{
    output<<number.areaCode<<"\n"<<number.exchange<<"\n"<<number.line<<endl;
    return output;
}

istream &operator>>( istream &input, Matrix &number )
{
    input>>setw(3)>>number.areaCode;

    input>>setw(3)>>number.exchange;

    input>>setw(3)>>number.line;
    return input;
}
