#include "Parallelogram.h"
#include <iostream>
using namespace std;


Parallelogram::Parallelogram()
{
}

Parallelogram::Parallelogram(double s1, double s2, double s3, double s4)
{
	setParallelogramAllSide(s1, s2, s3, s4);
}


void Parallelogram::setParallelogramAllSide(double s1, double s2, double s3, double s4){

	if ((s1 == s2&&s3 == s4)|| (s1==s3&&s2==s4)||(s1==s4&&s2==s3)){
		cout << "[*]����|��γ]�w���\" << endl;
		Quadrilateral::setSideAll(s1, s2, s3, s4);//�]�w�|��

	}
	else
	{
		cout << "[*]����|��γ]�w����,��l�ƨ�Ȭ�1" << endl;
		Quadrilateral::setSideAll();//�]�w�|��
	}
	
	Quadrilateral::showAllSide();

}
Parallelogram::~Parallelogram()
{
}
