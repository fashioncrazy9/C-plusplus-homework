#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
	float length, width;
	Rectangle test;
	cout << "請輸入長:" << endl;
	cin >> length;
	cout << "請輸入寬:" << endl;
	cin >> width;

	test.setLength(length);
	test.setWidth(width);
	cout << "周長:" << test.getPerimeter()<< endl;
	cout << "面積:" << test.getArea() << endl;

	system("pause");
	return 0;
}