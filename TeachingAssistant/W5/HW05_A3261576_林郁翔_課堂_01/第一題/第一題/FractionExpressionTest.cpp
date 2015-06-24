#include <iostream>
#include "FractionExpression.h"
using namespace std;

int main()
{

	FractionExpression kk,b;
	int d, n;
	cout << "正、負帶分數、假分數 "<< endl;
	cout << "提醒:假如要輸入負的分數請於分子輸入帶負號的數" << endl << endl;
	cout << "請輸入分子:" << endl;
	cin >> n;
	cout << "請輸入分母:" << endl;
	cin >> d;

	kk.setDenominatorl(d).setNumerator(n);

	cout << "儲存成 帶分數輸入1 儲存成假分數輸入2" << endl;
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
		cout << "輸入錯誤請正確輸入" << endl;
	}

	cout << "印出分數" << endl;
	kk.printFractional();
	system("pause");
}