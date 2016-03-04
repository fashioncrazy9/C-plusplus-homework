#include "FractionExpression.h"
#include <iostream>
using namespace std;

FractionExpression::FractionExpression()
{

}


FractionExpression::~FractionExpression()
{
}

void FractionExpression::printFractional(){


	if (multiples == 0)
	{
	
		cout << numerator << "/" << denominatorl << endl;
	}
	else
	{
		
		if (numerator != 0)
		{
			cout << multiples << "+" << "(" << numerator << "/" << denominatorl << ")" << endl;
		}
		else
		{
			cout << multiples << endl;
		}
	}

}
FractionExpression FractionExpression::toImproperFraction(FractionExpression f){

	bool de =false;//耞璽计
	//耞硂琌ぃ琌璽计
	if (f.denominatorl<0)
	{
		de = true;
		(f.denominatorl) = -(f.denominatorl);//锣Θタ
	}

	//安だ计锣盿だ计

	//埃Τ碭俱计 计m
	f.multiples = f.numerator / f.denominatorl;
	//锣传だΘ⊿Τ禬筁だダ
	f.numerator = f.numerator - (f.denominatorl*f.multiples);
	//锣传


	//だ
	if (!f.numerator == 0)
	{

		int gcdNum = gcd(f.denominatorl, f.numerator);	
		f.numerator = (de) ? -(f.numerator / gcdNum ): f.numerator / gcdNum;
		f.denominatorl = f.denominatorl / gcdNum;
	}

	return f;

}
FractionExpression FractionExpression::toMixedNumeral(FractionExpression f){

	//盿だ计锣安だ计
	//だ = 计+だ

	f.numerator = f.numerator + f.multiples*f.denominatorl;

	//だ
	if (!f.numerator == 0)
	{

		int gcdNum = gcd(f.denominatorl, f.numerator);
		f.numerator = f.numerator / gcdNum;
		f.denominatorl = f.denominatorl / gcdNum;
	}

	return f;
}

FractionExpression &FractionExpression::setDenominatorl(int m){

	denominatorl = m;

	return *this;
}

FractionExpression &FractionExpression::setNumerator(int n){
	numerator = n;
	return *this;
}
int FractionExpression::gcd(int a, int b){

	int d;
	for (d = a; !(a%d == 0 && b%d == 0); d--);
	return d;


}