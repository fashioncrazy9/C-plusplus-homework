#include"muti.h"
#include <iostream>

using namespace std;

int main()
{
	FractionExpression a, b, mechine;
	int p1, p2, p3, p4;
	cout << "正、負分數運算 加 減 乘 除" << endl;
	cout << "提醒:假如要輸入負的分數請於分子輸入帶負號的數" << endl << endl;
	cout << "請輸入第一個分數的分子:" << endl;
	cin >> p1;
	cout << "請輸入第一個分數的分母:" << endl;
	cin >> p2;

	a.setNumerator(p1).setDenominatorl(p2);
	int b1; //判斷第一個用哪種形式儲存
	while (1)
	{
		cout << "儲存成帶分數輸入1 儲存成假分數輸入2" << endl;
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
			cout << "選擇錯誤，請重新輸入" << endl;
			continue;
		}
		break;
	}


	cout << "請輸入第二個分數的分子:" << endl;
	cin >> p3;
	cout << "請輸入第二個分數的分母:" << endl;
	cin >> p4;
	b.setNumerator(p3).setDenominatorl(p4);

	int b2; //判斷第二個用哪種形式儲存
	while (1)
	{
		cout << "儲存成帶分數輸入1 儲存成假分數輸入2" << endl;
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
			cout << "選擇錯誤，請重新輸入" << endl;
			continue;
		}
		break;
	}


	//-----------------------------
	FractionExpression result; //用來儲存回傳結果
	//運算機器AdvFraExp我直接弄成static直接CALL它

	cout << "運算模式:相加 = 1 ,相減 = 2,相乘 =3 ,相除=4 " << endl;
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
		cout << "錯誤!請輸入1~4之間的整數!!" << endl;
	}
	//印出結果
	result.printFractional();





	system("pause");
}