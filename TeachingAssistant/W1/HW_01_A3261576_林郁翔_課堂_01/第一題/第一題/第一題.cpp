#include <iostream>

using namespace std;

int main()
{
	int Array[6] = { 1, 3, 5, 7, 9, 11 };


	int *myPointer = Array;

	//A.�}�C�����Ʀr 9 �C
	//	B.�ĥ|�Ӥ������O�����m�C
	//	C.Array[2]��ȡC

	cout << "A:" << *(myPointer + 4)<<endl;

	cout << "B:�ĥ|�����O�����m" << (myPointer + 3) << endl;

	cout << "C:Array[2]" << *(myPointer + 1) << endl;

	system("pause");

	return 0;
}