//�ϥ�sizeof()����ܥH�U��T�A��ú��M��
//A.	char szOOPL[] = "Object-Oriented Programming Language!"; ���r���}�C�����סC
//B.C���j�p(char�j�p)�C
//C.D���j�p(doubli�j�p)�C

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