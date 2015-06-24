#include "muti.h"
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
		cout << "ヘ玡纗安だ计:" << endl;
		cout << numerator << "/" << denominatorl << endl;
	}
	else
	{
		cout << "ヘ玡纗盿だ计:" << endl;
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
	bool de = false;//耞璽计
	//耞硂琌ぃ琌璽计
	if (f.denominatorl<0||f.multiples<0)
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
		f.numerator = (de) ? -(f.numerator / gcdNum) : f.numerator / gcdNum;
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


FractionExpression AdvFraExp::addFraction(FractionExpression a, FractionExpression b){

	FractionExpression result; //挡狦

	bool de = false; //程箇砞肚安だ计
	if (a.multiples != 0 || b.multiples != 0)
	{
		de = true; //肚盿だ计
	}

	//рa,b锣Θ安だ计
	a = FractionExpression::toMixedNumeral(a);
	b = FractionExpression::toMixedNumeral(b);

	//笲衡

	//だダ硄だ
	
	int m = a.denominatorl * b.denominatorl; //だダ
	
	//だЧ
	int tmp1 = a.numerator*b.denominatorl;
	int tmp2 = b.numerator*a.denominatorl;

	int n = tmp1 + tmp2;//だ

	//砞﹚挡狦
	result.setDenominatorl(m);
	result.setNumerator(n);

	if (de)
	{
		//肚盿だ计
		return FractionExpression::toImproperFraction(result);
	}
	else
	{
		//肚安だ计
		return FractionExpression::toMixedNumeral(result);
	}

}
FractionExpression AdvFraExp::subFraction(FractionExpression a, FractionExpression b){
	FractionExpression result; //挡狦

	bool de = false; //程箇砞肚安だ计
	if (a.multiples != 0 || b.multiples != 0)
	{
		de = true; //肚盿だ计
	}

	//рa,b锣Θ安だ计
	a = FractionExpression::toMixedNumeral(a);
	b = FractionExpression::toMixedNumeral(b);

	//搭笲衡

	//だダ硄だ

	int m = a.denominatorl * b.denominatorl; //だダ

	//だЧ搭
	int tmp1 = a.numerator*b.denominatorl;
	int tmp2 = b.numerator*a.denominatorl;

	int n = tmp1 - tmp2;//だ

	//砞﹚挡狦
	result.setDenominatorl(m);
	result.setNumerator(n);

	if (de)
	{
		//肚盿だ计
		return FractionExpression::toImproperFraction(result);
	}
	else
	{
		//肚安だ计
		return FractionExpression::toMixedNumeral(result);
	}
}
FractionExpression AdvFraExp::mulFraction(FractionExpression a, FractionExpression b){


	FractionExpression result;//挡狦
	
	bool de = false; //程箇砞肚安だ计
	if (a.multiples != 0 || b.multiples != 0)
	{
		de = true; //肚盿だ计
	}

	//рa,b锣Θ安だ计
	a = FractionExpression::toMixedNumeral(a);
	b = FractionExpression::toMixedNumeral(b);

	int m = a.denominatorl*b.denominatorl; //だダ
	int n = a.numerator*b.numerator;//だ

	result.denominatorl = m;
	result.numerator = n;

	if (de)
	{
		//肚盿だ计
		return FractionExpression::toImproperFraction(result);
	}
	else
	{
		//肚安だ计
		return FractionExpression::toMixedNumeral(result);
	}

}
FractionExpression AdvFraExp::divFraction(FractionExpression a, FractionExpression b){
	
	FractionExpression result;//挡狦

	bool de = false; //程箇砞肚安だ计
	if (a.multiples != 0 || b.multiples != 0)
	{
		de = true; //肚盿だ计
	}

	//рa,b锣Θ安だ计
	a = FractionExpression::toMixedNumeral(a);
	b = FractionExpression::toMixedNumeral(b);

	int m = a.denominatorl*b.numerator; //だダ
	int n = a.numerator*b.denominatorl;//だ

	result.denominatorl = m;
	result.numerator = n;

	if (de)
	{
		//肚盿だ计
		return FractionExpression::toImproperFraction(result);
	}
	else
	{
		//肚安だ计
		return FractionExpression::toMixedNumeral(result);
	}
}