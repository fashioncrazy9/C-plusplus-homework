#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
	float length, width;
	float point[4][2];
	cout << "�Ш̮y�ж��ǿ�J" << endl;
	for (int i = 0; i < 4; i++)
	{
		float x, y;
		cout << "�п�J��" << i+1 << "��x:" << endl;
		cin >> x;
		point[i][0] = x;
		cout << "�п�J��" << i+1 << "��y:" << endl;
		cin >> y;
		point[i][1] = y;
	}

	Rectangle test(point[0][0], point[0][1], point[1][0], point[1][1], point[2][0], point[2][1], point[3][0], point[3][1]);

	cout << "�P��:" << test.getPerimeter() << endl;
	cout << "���n:" << test.getArea() << endl;
	cout << "�O�_���x��:(0=flase,1=true)" << test.getRectangleBool() << endl;
	cout << "�O�_�������(0=flase,1=true):" << test.getSquareBool() << endl;
	system("pause");
	return 0;
	
}