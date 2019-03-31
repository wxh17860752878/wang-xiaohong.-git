#include <iostream>
#include "Polynomial.h"
using namespace std;

int  main()
{
	Polynomial a,b,c,t,d;
	a.EnterTerms();
	b.EnterTerms();
	int s=1;
	cout<<endl<<"First polynomial is:";
	a.PrintPolynomial();
	cout<<endl<<"Second polynomial is:";
	b.PrintPolynomial();
	cout<<endl<<"Add the polynomials is:";
	c=a+b;
	c.PrintPolynomial();
	cout<<endl<<"+=the polynomials is:";
	t=a;
	a+=b;
	a.PrintPolynomial();
	cout<<endl<<"Subtracting the polynomials is:";
	a=t;
	c=a-b;
	c.PrintPolynomial();
	cout<<endl<<"-=the polynomials is:";
	a-=b;
	a.PrintPolynomial();
	cout<<endl<<"Multiplying the polynomials is:";
	a=t;
	c=a*b;
	c.PrintPolynomial();
	cout<<endl<<"*=the polynomials yields:";
	a*=b;
	a.PrintPolynomial();
	cout<<endl;

}
