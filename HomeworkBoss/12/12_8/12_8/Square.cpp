#include "Square.h"
#include <iostream>
using namespace std;

Square::Square()
{
}
Square::Square(double s1, double s2, double s3, double s4){
	setSquareAllSide(s1, s2, s3, s4);
}
void Square::setSquareAllSide(double s1, double s2, double s3, double s4){

	if (s1 == s2 &&s2==s3&&s3==s4&&s4==s1){
		cout << "[*]正方形設定成功" << endl;
		Quadrilateral::setSideAll(s1, s2, s3, s4);//設定四邊
	}
	else
	{
		cout << "[*]正方形設定失敗,初始化其值為1" << endl;
		Quadrilateral::setSideAll();//設定四邊
	}
	Quadrilateral::showAllSide();
}

Square::~Square()
{
}
