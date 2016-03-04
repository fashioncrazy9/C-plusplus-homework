#pragma once
class FractionExpression
{
	//�x�s�ɭn���ܭn�s�������Ʃαa����
private:
	int denominatorl;
	int numerator;
	int multiples=0;
	static int gcd(int a, int b);
public:
	FractionExpression &setDenominatorl(int m);
	FractionExpression &setNumerator(int n);
	void printFractional();
	static FractionExpression  toImproperFraction(FractionExpression f);
	static FractionExpression  toMixedNumeral(FractionExpression f);
	FractionExpression();
	~FractionExpression();
};

