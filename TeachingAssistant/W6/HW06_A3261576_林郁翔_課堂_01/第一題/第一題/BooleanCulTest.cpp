#include <iostream>
#include "BooleanCul.h"
using namespace std;

int main()
{
	BooleanCul hex1,hex2;
	cout << "��J�Y�u������EX A ���п�J0A" << endl;
	cout << "�п�J�Ĥ@��HEX:" << endl;
	cin >> hex1;
	cout << "�п�J�ĤG��HEX:" << endl;
	cin >> hex2;

	BooleanCul cul(hex1, hex2);
	cul.printBoolean(cul);


	system("pause");
}