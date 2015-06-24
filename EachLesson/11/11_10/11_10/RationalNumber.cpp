#include "RationalNumber.h"
#include <iostream>
#include <math.h>
using namespace std;

int RationalNumber::getMolecule(){return molecule;}
int RationalNumber::getDenominator(){return denominator;}
RationalNumber::RationalNumber(){}

ostream &operator<<(ostream & output, RationalNumber &right){
	return (output << right.molecule << "/" << right.denominator);
}
int RationalNumber::gcd(int a, int b)
{
	if (a == 0) return b;
	return gcd(b%a, a);
}



bool RationalNumber::operator <= (RationalNumber & fraction2)
{
	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	m1 *= d2;
	m2 *= d1;

	return (m1 <= m2) ? true : false;
}



bool RationalNumber::operator < (RationalNumber & fraction2)
{
	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	m1 *= d2;
	m2 *= d1;

	return (m1 < m2) ? true : false;
}
bool RationalNumber::operator >=(RationalNumber & fraction2)
{
	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	m1 *= d2;
	m2 *= d1;

	return (m1 >= m2) ? true : false;


}
bool RationalNumber::operator > (RationalNumber & fraction2)
{
	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	m1 *= d2;
	m2 *= d1;

	return (m1 > m2) ? true : false;


}
bool RationalNumber::operator == (RationalNumber & fraction2)
{

	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	return (d1 == d2&&m1 == m2) ? true : false;
	


}
bool RationalNumber::operator != (RationalNumber & fraction2)
{
	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	return (d1 != d2 || m1 != m2) ? true : false;
}
RationalNumber RationalNumber::operator / (RationalNumber & fraction2)
{
	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	int d = d1*m2;//分母相乘
	int m = m1*d2;

	int g = abs(RationalNumber::gcd(d, m));

	d /= g;
	m /= g;

	RationalNumber resultFraction(m, d);

	return resultFraction;

}
RationalNumber RationalNumber::operator * (RationalNumber & fraction2)
{
	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	int d = d1*d2;//分母相乘
	int m = m1*m2;

	int g = abs(RationalNumber::gcd(d, m));

	d /= g;
	m /= g;

	RationalNumber resultFraction(m, d);

	return resultFraction;

}

RationalNumber RationalNumber::operator - (RationalNumber & fraction2)
{
	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	int d = d1*d2;//分母相乘
	int m = m1*d2 - m2*d1;

	int g = abs(RationalNumber::gcd(d, m));

	d /= g;
	m /= g;

	RationalNumber resultFraction(m, d);

	return resultFraction;

}
RationalNumber RationalNumber::operator + (RationalNumber & fraction2)
{

	int d1 = getDenominator();
	int d2 = fraction2.getDenominator();
	int m1 = getMolecule();
	int m2 = fraction2.getMolecule();

	int d = d1*d2;//分母相乘
	int m = m1*d2 + m2*d1;

	int g = abs(RationalNumber::gcd(d, m));

	d /= g;
	m /= g;

	RationalNumber resultFraction(m, d);

	return resultFraction;
}


void RationalNumber::setFraction(int m, int d){

	int _m = m;
	int _d = d;

	int g = abs(RationalNumber::gcd(m, d));
	m /= g;
	d /= g;
	setDenominator(d).setMolecule(m);


}
RationalNumber::RationalNumber(int m, int d)
{
	if (d != 0)
	{
		setFraction(m, d);
	}
	else
	{
		cout << "[警告]錯誤!分母不可為0" << endl;
	}


}

RationalNumber &RationalNumber::setMolecule(int m){

	molecule = m;
	return *this;
}
RationalNumber &RationalNumber::setDenominator(int d){

	denominator = d;
	return *this;
}

RationalNumber::~RationalNumber()
{
}
