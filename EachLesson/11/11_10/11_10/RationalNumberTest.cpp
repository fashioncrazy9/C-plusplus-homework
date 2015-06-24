#include <iostream>
#include "RationalNumber.h"
using namespace std;

int main()
{
	/// <summary>
	/// 分數多載
	/// 20150509 林郁翔
	/// </summary>
	cout << "[分母若為0顯示錯誤]" << endl;
	cout << "C=1/0"<<endl;
	RationalNumber C(1, 0);
	cout << '\n';
	RationalNumber A(3, 8), B(4, 7);
	cout << "[四則多載]" << endl;
	cout << "A=3/8 B=4/7" << endl;
	cout << "A+B" << endl<< (A + B) << endl;;
	cout << "A-B" << endl << (A - B) << endl;;
	cout << "A*B" << endl << (A * B) << endl;;
	cout << "A/B" << endl << (A / B) << endl;;
	cout << "[關係運算子多載: 0=flase;1= true]" << endl;
	cout << "關係運算子 A>B" << endl;
	cout << ((A > B) ? true : false )<<endl;
	cout << "關係運算子 A<B" << endl;
	cout << ((A < B) ? true : false) << endl;
	cout << "關係運算子 A>=B" << endl;
	cout << ((A >= B) ? true : false) << endl;
	cout << "關係運算子 A<=B" << endl;
	cout << ((A <= B) ? true : false) << endl;
	cout << "關係運算子 A!=B" << endl;
	cout << ((A != B) ? true : false) << endl;
	cout << "關係運算子 A==B" << endl;
	cout << ((A == B) ? true : false) << endl;

	

	system("pause");
	return 0;
}