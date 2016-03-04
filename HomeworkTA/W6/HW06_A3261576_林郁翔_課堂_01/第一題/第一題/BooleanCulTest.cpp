#include <iostream>
#include "BooleanCul.h"
using namespace std;

int main()
{
	BooleanCul hex1,hex2;
	cout << "輸入若只為單位數EX A 那請輸入0A" << endl;
	cout << "請輸入第一個HEX:" << endl;
	cin >> hex1;
	cout << "請輸入第二個HEX:" << endl;
	cin >> hex2;

	BooleanCul cul(hex1, hex2);
	cul.printBoolean(cul);


	system("pause");
}