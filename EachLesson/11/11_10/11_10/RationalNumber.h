#pragma once
#include <iostream>
using namespace std;
class RationalNumber
{
private:
	friend ostream &operator<<(ostream &, RationalNumber &);
	int molecule, denominator;//molecule¤À¤l; denominator¤À¥À
public:
	static int gcd(int a, int b);//GCD
	RationalNumber();
	RationalNumber(int m,int d);
	~RationalNumber();
	RationalNumber &setMolecule(int m);
	RationalNumber &setDenominator(int d);
	void setFraction(int m,int d);
	int getMolecule();
	int getDenominator();

	RationalNumber operator+(RationalNumber&);
	RationalNumber operator-(RationalNumber&);
	RationalNumber operator*(RationalNumber&);
	RationalNumber operator/(RationalNumber&);

	bool operator==(RationalNumber&);
	bool operator>(RationalNumber&);
	bool operator<(RationalNumber&);
	bool operator!=(RationalNumber&);
	bool operator>=(RationalNumber&);
	bool operator<=(RationalNumber&);

};

