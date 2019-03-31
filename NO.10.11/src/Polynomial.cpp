#include "Polynomial.h"
#include <iomanip>
#include<iostream>
using namespace std;

Polynomial::Polynomial()
{
	for(int i=0;i<100;i++)
	{
		coefficients[i]=0;
		exponents[i]=0;
	}
}
void Polynomial::PrintPolynomial() const
{
	int start;
	bool zero=false;
	if(coefficients[0])
	{
		cout<<coefficients[0];
		start=1;
		zero=true;
	}
	else
	{
		if(coefficients[1])
		{
			cout<<coefficients[1]<<'x';
			if((exponents[1]!=0)&&(exponents[1]!=1))
				cout<<'^'<<exponents[1];
			zero=true;
		}
		start=2;
	}
	for(int x=start;x<100;x++)
		if(coefficients[x]!=0)
		{
			cout<<setiosflags(ios::showpos)<<coefficients[x]
				<<resetiosflags(ios::showpos)<<'x';
			if((exponents[x]!=0)&&(exponents[x]!=1))
				cout<<'^'<<exponents[x];
			zero=true;
		}
	if(!zero)
		cout<<'0';
	cout<<endl;
}
Polynomial Polynomial::operator+(const Polynomial& r) const
{
	Polynomial temp;
	bool exponentExists;
	temp.coefficients[0]=coefficients[0]+r.coefficients[0];
	for(int s=1;(s<100)&&(r.exponents[s]!=0);s++)
	{
		temp.coefficients[s]=r.coefficients[s];
		temp.exponents[s]=r.exponents[s];
	}
	for(int x=1;x<100;x++)
	{
		exponentExists=false;
		for(int t=1;(t<100)&&(!exponentExists);t++)
			if(exponents[x]==temp.exponents[t])
			{
				temp.coefficients[t]+=coefficients[x];
				exponentExists=true;
			}
			if(!exponentExists)
			{
			    int s =1;
				temp.exponents[s]=exponents[x];
				temp.coefficients[s]+=coefficients[x];
				s++;
			}
	}
	return temp;
}
Polynomial &Polynomial::operator+=(const Polynomial &r)
{
	*this=*this+r;
	return *this;
}
Polynomial Polynomial::operator-(const Polynomial &r)const
{
	Polynomial temp;
	bool exponentExists;
	temp.coefficients[0]=coefficients[0]-r.coefficients[0];
	for(int s=1;(s<100)&&(exponents[s]!=0);s++)
	{
		temp.coefficients[s]=coefficients[s];
		temp.exponents[s]=exponents[s];
	}
	for(int x=1;x<100;x++)
	{
		exponentExists=false;
		for(int t=1;(t<100)&&(!exponentExists);t++)
			if(r.exponents[x]==temp.exponents[t])
			{
				temp.coefficients[t]-=r.coefficients[x];
				exponentExists=true;
			}
		if(!exponentExists)
		{
		    int s=1;
			temp.exponents[s]=r.exponents[x];
			temp.coefficients[s]-=r.coefficients[x];
			s++;
		}
	}
	return temp;
}
Polynomial &Polynomial::operator-=(const Polynomial& r)
{
	*this=*this-r;
	return *this;
}
Polynomial Polynomial::operator*(const Polynomial& r)
{
	Polynomial temp;
	int s=1;
	for(int x=0;(x<100)&&(x==0||coefficients[x]!=0);x++)
		for(int y=0;(y<100)&&(y==0||r.coefficients[y]!=0);y++)
			if(coefficients[x]*r.coefficients[y])
				if((exponents[x]==0)&&(r.exponents[y]==0))
					temp.coefficients[0]+=coefficients[x]*r.coefficients[y];
				else
				{
					temp.coefficients[s]= coefficients[x]*r.coefficients[y];
					temp.exponents[s]=exponents[x]+r.exponents[y];
					s++;
				}
	polynomialCombine(temp);
	return temp;
}
void Polynomial::polynomialCombine(Polynomial& w)
{
	Polynomial temp=w;
	int exp;
	for(int x=0;x<100;x++)
	{
		w.coefficients[x]=0;
		w.exponents[x]=0;
	}
	for(int x=1;x<100;x++)
	{
		exp=temp.exponents[x];
		for(int y=x+1;y<100;y++)
			if(exp==temp.exponents[y])
			{
				temp.coefficients[x]+=temp.coefficients[y];
				temp.exponents[y]=0;
				temp.coefficients[y]=0;
			}
	}
	w=temp;
}
Polynomial &Polynomial::operator*=(const Polynomial& r)
{
	*this=*this*r;
	return *this;
}
void Polynomial::EnterTerms()
{
	bool found=false;
	int numberOfTerms,c,e;
	cout<<"Enter number of polynomial terms:";
	cin>>numberOfTerms;
	for(int n=1;n<=numberOfTerms;n++)
	{
		cout<<"Enter coefficient:";
		cin>>c;
		cout<<"Enter exponent:";
		cin>>e;
		if(c!=0)
		{
			if(e==0)
			{
				coefficients[0]+=c;
				continue;
			}
			for(int term=1;(term<100)&&(coefficients[term]!=0);term++)
				if(e==exponents[term])
				{
					coefficients[term]+=c;
					exponents[term]=e;
					found=true;
				}
			if(!found)
			{
			    int term=1;
				coefficients[term]+=c;
				exponents[term]=e;
			}
		}
	}
}

