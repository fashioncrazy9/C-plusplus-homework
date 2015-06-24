#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}
Rectangle::Rectangle(double s1, double s2, double s3, double s4)
{
	setRectangleAllSide(s1, s2, s3, s4);
}
void Rectangle::setRectangleAllSide(double s1, double s2, double s3, double s4){

	if (s1 == s2 || s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4 || s3 == s4){
		cout << "[*]矩形設定成功"<<endl;
		Quadrilateral::setSideAll(s1, s2, s3, s4);//設定四邊
	}
	else
	{
		cout << "[*]矩形設定失敗,初始化其值為1" << endl;
		Quadrilateral::setSideAll();//設定四邊
	}
	Quadrilateral::showAllSide();
}