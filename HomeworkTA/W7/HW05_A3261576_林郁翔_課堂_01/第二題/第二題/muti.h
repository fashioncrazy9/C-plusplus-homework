#pragma once

class FractionExpression
{
	//�x�s�ɭn���ܭn�s�������Ʃαa����

public:

	int denominatorl;
	int numerator;
	int multiples = 0;
	static int gcd(int a, int b);

	FractionExpression &setDenominatorl(int m);
	FractionExpression &setNumerator(int n);
	void printFractional();
	static FractionExpression  toImproperFraction(FractionExpression f);
	static FractionExpression  toMixedNumeral(FractionExpression f);
	FractionExpression();
	~FractionExpression();
};

class AdvFraExp
{
public:
	static FractionExpression addFraction(FractionExpression a, FractionExpression b);
	static FractionExpression subFraction(FractionExpression a, FractionExpression b);
	static FractionExpression mulFraction(FractionExpression a, FractionExpression b);
	static FractionExpression divFraction(FractionExpression a, FractionExpression b);
};