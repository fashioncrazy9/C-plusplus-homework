//使用sizeof()來顯示以下資訊，並繳交專案
//A.	char szOOPL[] = "Object-Oriented Programming Language!"; 此字元陣列的長度。
//B.C的大小(char大小)。
//C.D的大小(doubli大小)。

#include <iostream>

using namespace std;

int main()
{



		char szOOPL[] = "Object-Oriented Programming Language!";
		char C = 'C';
		double	D = 123.321;

	cout << "A." << sizeof szOOPL<<endl;
	cout << "B." << sizeof C << endl;
	cout << "C." << sizeof D << endl;


	system("pause");
	return 0;
}