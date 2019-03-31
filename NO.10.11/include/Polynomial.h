#include <iostream>
using namespace std;
class Polynomial
{
public:
	Polynomial();
	Polynomial operator+(const Polynomial&)const;
	Polynomial operator-(const Polynomial&)const;
	Polynomial operator*(const Polynomial&);
	Polynomial& operator+=(const Polynomial&);
	Polynomial& operator-=(const Polynomial&);
	Polynomial& operator*=(const Polynomial&);
	void EnterTerms();
	void PrintPolynomial( )const;
private:
	int exponents[100];
	int coefficients[100];
	void polynomialCombine(Polynomial&);
};

