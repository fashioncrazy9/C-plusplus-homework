#pragma once

class FractionExpression
{
	//儲存時要能選擇要存成假分數或帶分數

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