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
		cout << "[*]平行四邊形設定成功" << endl;
		Quadrilateral::setSideAll(s1, s2, s3, s4);//設定四邊

	}
	else
	{
		cout << "[*]平行四邊形設定失敗,初始化其值為1" << endl;
		Quadrilateral::setSideAll();//設定四邊
	}
	
	Quadrilateral::showAllSide();

}
Parallelogram::~Parallelogram()
{
}
