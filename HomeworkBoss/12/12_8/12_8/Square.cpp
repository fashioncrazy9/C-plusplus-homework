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
		cout << "[*]����γ]�w���\" << endl;
		Quadrilateral::setSideAll(s1, s2, s3, s4);//�]�w�|��
	}
	else
	{
		cout << "[*]����γ]�w����,��l�ƨ�Ȭ�1" << endl;
		Quadrilateral::setSideAll();//�]�w�|��
	}
	Quadrilateral::showAllSide();
}

Square::~Square()
{
}
