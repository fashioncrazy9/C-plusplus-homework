#include"muti.h"
#include <iostream>

using namespace std;

int main()
{
	FractionExpression a, b, mechine;
	int p1, p2, p3, p4;
	cout << "���B�t���ƹB�� �[ �� �� ��" << endl;
	cout << "����:���p�n��J�t�����ƽЩ���l��J�a�t������" << endl << endl;
	cout << "�п�J�Ĥ@�Ӥ��ƪ����l:" << endl;
	cin >> p1;
	cout << "�п�J�Ĥ@�Ӥ��ƪ�����:" << endl;
	cin >> p2;

	a.setNumerator(p1).setDenominatorl(p2);
	int b1; //�P�_�Ĥ@�ӥέ��اΦ��x�s
	while (1)
	{
		cout << "�x�s���a���ƿ�J1 �x�s�������ƿ�J2" << endl;
		cin >> b1;
		if (b1 == 1)
		{
			a = mechine.toImproperFraction(a);

		}
		else if (b1 == 2)
		{
			a = mechine.toMixedNumeral(a);
		}
		else
		{
			cout << "��ܿ��~�A�Э��s��J" << endl;
			continue;
		}
		break;
	}


	cout << "�п�J�ĤG�Ӥ��ƪ����l:" << endl;
	cin >> p3;
	cout << "�п�J�ĤG�Ӥ��ƪ�����:" << endl;
	cin >> p4;
	b.setNumerator(p3).setDenominatorl(p4);

	int b2; //�P�_�ĤG�ӥέ��اΦ��x�s
	while (1)
	{
		cout << "�x�s���a���ƿ�J1 �x�s�������ƿ�J2" << endl;
		cin >> b2;
		if (b2 == 1)
		{
			b = mechine.toImproperFraction(b);
		}
		else if (b2 == 2)
		{
			b = mechine.toMixedNumeral(b);
		}
		else
		{
			cout << "��ܿ��~�A�Э��s��J" << endl;
			continue;
		}
		break;
	}


	//-----------------------------
	FractionExpression result; //�Ψ��x�s�^�ǵ��G
	//�B�����AdvFraExp�ڪ����˦�static����CALL��

	cout << "�B��Ҧ�:�ۥ[ = 1 ,�۴� = 2,�ۭ� =3 ,�۰�=4 " << endl;
	int ggininder;
	cin >> ggininder;
	if (ggininder == 1)
	{
		result = AdvFraExp::addFraction(a, b);
	}
	else if (ggininder == 2)
	{
		result = AdvFraExp::subFraction(a, b);
	}
	else if (ggininder == 3)
	{
		result = AdvFraExp::mulFraction(a, b);
	}
	else if (ggininder == 4)
	{
		result = AdvFraExp::divFraction(a, b);
	}
	else
	{
		cout << "���~!�п�J1~4���������!!" << endl;
	}
	//�L�X���G
	result.printFractional();





	system("pause");
}