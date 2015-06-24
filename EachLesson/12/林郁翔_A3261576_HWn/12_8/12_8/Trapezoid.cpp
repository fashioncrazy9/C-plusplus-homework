#include "Trapezoid.h"
#include <iostream>
using namespace std;

Trapezoid::Trapezoid()
{
	setTrapezoidAllSide();
}
Trapezoid::Trapezoid(double s1, double s2, double s3, double s4)
{
	setTrapezoidAllSide(s1, s2, s3, s4);
}

void Trapezoid::setTrapezoidAllSide(double s1, double s2, double s3, double s4){

	if (s1 == s2 || s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4 || s3 == s4){
		cout << "[*]��γ]�w���\" << endl;
		Quadrilateral::setSideAll(s1, s2, s3, s4);//�]�w�|��
	}
	else
	{
		cout << "[*]��γ]�w����,��l�ƨ�Ȭ�1" << endl;
		Quadrilateral::setSideAll();//�]�w�|��
	}
	Quadrilateral::showAllSide();
}
Trapezoid::~Trapezoid()
{
}
