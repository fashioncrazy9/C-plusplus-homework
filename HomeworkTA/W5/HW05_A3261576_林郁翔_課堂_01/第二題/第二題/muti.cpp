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
		cout << "�ثe�x���Ȭ�������:" << endl;
		cout << numerator << "/" << denominatorl << endl;
	}
	else
	{
		cout << "�ثe�x���Ȭ��a����:" << endl;
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
	bool de = false;//�P�_�t��
	//���P�_�o�ӭȬO���O�t��
	if (f.denominatorl<0||f.multiples<0)
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
		f.numerator = (de) ? -(f.numerator / gcdNum) : f.numerator / gcdNum;
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


FractionExpression AdvFraExp::addFraction(FractionExpression a, FractionExpression b){

	FractionExpression result; //���G

	bool de = false; //�̫�w�]�^�ǰ�����
	if (a.multiples != 0 || b.multiples != 0)
	{
		de = true; //�^�Ǳa����
	}

	//����a,b�ন������
	a = FractionExpression::toMixedNumeral(a);
	b = FractionExpression::toMixedNumeral(b);

	//�ۥ[�B��

	//�����q��
	
	int m = a.denominatorl * b.denominatorl; //����
	
	//���l�����ۥ[
	int tmp1 = a.numerator*b.denominatorl;
	int tmp2 = b.numerator*a.denominatorl;

	int n = tmp1 + tmp2;//���l

	//�]�w�쵲�G
	result.setDenominatorl(m);
	result.setNumerator(n);

	if (de)
	{
		//�^�Ǳa����
		return FractionExpression::toImproperFraction(result);
	}
	else
	{
		//�^�ǰ�����
		return FractionExpression::toMixedNumeral(result);
	}

}
FractionExpression AdvFraExp::subFraction(FractionExpression a, FractionExpression b){
	FractionExpression result; //���G

	bool de = false; //�̫�w�]�^�ǰ�����
	if (a.multiples != 0 || b.multiples != 0)
	{
		de = true; //�^�Ǳa����
	}

	//����a,b�ন������
	a = FractionExpression::toMixedNumeral(a);
	b = FractionExpression::toMixedNumeral(b);

	//�۴�B��

	//�����q��

	int m = a.denominatorl * b.denominatorl; //����

	//���l�����۴�
	int tmp1 = a.numerator*b.denominatorl;
	int tmp2 = b.numerator*a.denominatorl;

	int n = tmp1 - tmp2;//���l

	//�]�w�쵲�G
	result.setDenominatorl(m);
	result.setNumerator(n);

	if (de)
	{
		//�^�Ǳa����
		return FractionExpression::toImproperFraction(result);
	}
	else
	{
		//�^�ǰ�����
		return FractionExpression::toMixedNumeral(result);
	}
}
FractionExpression AdvFraExp::mulFraction(FractionExpression a, FractionExpression b){


	FractionExpression result;//���G
	
	bool de = false; //�̫�w�]�^�ǰ�����
	if (a.multiples != 0 || b.multiples != 0)
	{
		de = true; //�^�Ǳa����
	}

	//����a,b�ন������
	a = FractionExpression::toMixedNumeral(a);
	b = FractionExpression::toMixedNumeral(b);

	int m = a.denominatorl*b.denominatorl; //����
	int n = a.numerator*b.numerator;//���l

	result.denominatorl = m;
	result.numerator = n;

	if (de)
	{
		//�^�Ǳa����
		return FractionExpression::toImproperFraction(result);
	}
	else
	{
		//�^�ǰ�����
		return FractionExpression::toMixedNumeral(result);
	}

}
FractionExpression AdvFraExp::divFraction(FractionExpression a, FractionExpression b){
	
	FractionExpression result;//���G

	bool de = false; //�̫�w�]�^�ǰ�����
	if (a.multiples != 0 || b.multiples != 0)
	{
		de = true; //�^�Ǳa����
	}

	//����a,b�ন������
	a = FractionExpression::toMixedNumeral(a);
	b = FractionExpression::toMixedNumeral(b);

	int m = a.denominatorl*b.numerator; //����
	int n = a.numerator*b.denominatorl;//���l

	result.denominatorl = m;
	result.numerator = n;

	if (de)
	{
		//�^�Ǳa����
		return FractionExpression::toImproperFraction(result);
	}
	else
	{
		//�^�ǰ�����
		return FractionExpression::toMixedNumeral(result);
	}
}