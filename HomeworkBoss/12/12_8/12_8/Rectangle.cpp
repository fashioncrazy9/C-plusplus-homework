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
		cout << "[*]�x�γ]�w���\"<<endl;
		Quadrilateral::setSideAll(s1, s2, s3, s4);//�]�w�|��
	}
	else
	{
		cout << "[*]�x�γ]�w����,��l�ƨ�Ȭ�1" << endl;
		Quadrilateral::setSideAll();//�]�w�|��
	}
	Quadrilateral::showAllSide();
}