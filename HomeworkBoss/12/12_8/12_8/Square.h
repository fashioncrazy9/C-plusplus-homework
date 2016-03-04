#pragma once
#include "Rectangle.h"
class Square :
	public Rectangle
{
public:
	void setSquareAllSide(double = 1, double = 1, double = 1, double = 1);
	Square(double s1, double s2, double s3, double s4);
	Square();
	~Square();
};

