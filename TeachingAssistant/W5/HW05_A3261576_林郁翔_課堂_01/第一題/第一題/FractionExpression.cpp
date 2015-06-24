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

	bool de =false;//�P�_�t��
	//���P�_�o�ӭȬO���O�t��
	if (f.denominatorl<0)
	{
		de = true;
		(f.denominatorl) = -(f.denominatorl);//���ন��
	}

	//��������a����

	//�����ݯ঳�X�Ӿ�� �æs�쭿��m
	f.multiples = f.numerator / f.denominatorl;
	//�ഫ���l���S���W�L����
	f.numerator = f.numerator - (f.denominatorl*f.multiples);
	//�Y�i�ഫ


	//����
	if (!f.numerator == 0)
	{

		int gcdNum = gcd(f.denominatorl, f.numerator);	
		f.numerator = (de) ? -(f.numerator / gcdNum ): f.numerator / gcdNum;
		f.denominatorl = f.denominatorl / gcdNum;
	}

	return f;

}
FractionExpression FractionExpression::toMixedNumeral(FractionExpression f){

	//�a�����ల����
	//���l = ���^�L������+���l

	f.numerator = f.numerator + f.multiples*f.denominatorl;

	//����
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