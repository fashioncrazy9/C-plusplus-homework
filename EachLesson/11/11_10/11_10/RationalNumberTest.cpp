#include <iostream>
#include "RationalNumber.h"
using namespace std;

int main()
{
	/// <summary>
	/// ���Ʀh��
	/// 20150509 �L����
	/// </summary>
	cout << "[�����Y��0��ܿ��~]" << endl;
	cout << "C=1/0"<<endl;
	RationalNumber C(1, 0);
	cout << '\n';
	RationalNumber A(3, 8), B(4, 7);
	cout << "[�|�h�h��]" << endl;
	cout << "A=3/8 B=4/7" << endl;
	cout << "A+B" << endl<< (A + B) << endl;;
	cout << "A-B" << endl << (A - B) << endl;;
	cout << "A*B" << endl << (A * B) << endl;;
	cout << "A/B" << endl << (A / B) << endl;;
	cout << "[���Y�B��l�h��: 0=flase;1= true]" << endl;
	cout << "���Y�B��l A>B" << endl;
	cout << ((A > B) ? true : false )<<endl;
	cout << "���Y�B��l A<B" << endl;
	cout << ((A < B) ? true : false) << endl;
	cout << "���Y�B��l A>=B" << endl;
	cout << ((A >= B) ? true : false) << endl;
	cout << "���Y�B��l A<=B" << endl;
	cout << ((A <= B) ? true : false) << endl;
	cout << "���Y�B��l A!=B" << endl;
	cout << ((A != B) ? true : false) << endl;
	cout << "���Y�B��l A==B" << endl;
	cout << ((A == B) ? true : false) << endl;

	

	system("pause");
	return 0;
}