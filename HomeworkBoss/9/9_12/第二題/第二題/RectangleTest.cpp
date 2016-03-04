#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
	float length, width;
	float point[4][2];
	cout << "請依座標順序輸入" << endl;
	for (int i = 0; i < 4; i++)
	{
		float x, y;
		cout << "請輸入第" << i+1 << "組x:" << endl;
		cin >> x;
		point[i][0] = x;
		cout << "請輸入第" << i+1 << "組y:" << endl;
		cin >> y;
		point[i][1] = y;
	}

	Rectangle test(point[0][0], point[0][1], point[1][0], point[1][1], point[2][0], point[2][1], point[3][0], point[3][1]);

	cout << "周長:" << test.getPerimeter() << endl;
	cout << "面積:" << test.getArea() << endl;
	cout << "是否為矩形:(0=flase,1=true)" << test.getRectangleBool() << endl;
	cout << "是否為正方形(0=flase,1=true):" << test.getSquareBool() << endl;
	system("pause");
	return 0;
	
}