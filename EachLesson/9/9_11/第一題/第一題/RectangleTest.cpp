#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
	float length, width;
	Rectangle test;
	cout << "�п�J��:" << endl;
	cin >> length;
	cout << "�п�J�e:" << endl;
	cin >> width;

	test.setLength(length);
	test.setWidth(width);
	cout << "�P��:" << test.getPerimeter()<< endl;
	cout << "���n:" << test.getArea() << endl;

	system("pause");
	return 0;
}