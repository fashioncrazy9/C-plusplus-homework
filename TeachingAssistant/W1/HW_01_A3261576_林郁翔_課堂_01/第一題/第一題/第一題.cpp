#include <iostream>

using namespace std;

int main()
{
	int Array[6] = { 1, 3, 5, 7, 9, 11 };


	int *myPointer = Array;

	//A.陣列中的數字 9 。
	//	B.第四個元素的記憶體位置。
	//	C.Array[2]其值。

	cout << "A:" << *(myPointer + 4)<<endl;

	cout << "B:第四元素記憶體位置" << (myPointer + 3) << endl;

	cout << "C:Array[2]" << *(myPointer + 1) << endl;

	system("pause");

	return 0;
}