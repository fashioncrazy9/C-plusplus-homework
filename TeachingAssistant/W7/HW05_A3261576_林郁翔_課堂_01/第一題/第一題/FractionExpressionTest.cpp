#include <iostream>
#include "FractionExpression.h"
using namespace std;

int main()
{

	FractionExpression kk,b;
	int d, n;
	cout << "���B�t�a���ơB������ "<< endl;
	cout << "����:���p�n��J�t�����ƽЩ���l��J�a�t������" << endl << endl;
	cout << "�п�J���l:" << endl;
	cin >> n;
	cout << "�п�J����:" << endl;
	cin >> d;

	kk.setDenominatorl(d).setNumerator(n);

	cout << "�x�s�� �a���ƿ�J1 �x�s�������ƿ�J2" << endl;
	int ggInInder;
	cin >> ggInInder;
	if (ggInInder == 1)
	{
		kk = FractionExpression::toImproperFraction(kk);
	}
	else if (ggInInder == 2)
	{
		kk = FractionExpression::toMixedNumeral(kk);
	}
	else
	{
		cout << "��J���~�Х��T��J" << endl;
	}

	cout << "�L�X����" << endl;
	kk.printFractional();
	system("pause");
}