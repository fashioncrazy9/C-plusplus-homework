#pragma once
#include "Parallelogram.h"
class Rectangle :
	public Parallelogram
{
public:
	void setRectangleAllSide(double = 1, double = 1, double = 1, double = 1);
	Rectangle();
	Rectangle(double s1, double s2, double s3, double s4);
	~Rectangle();
};

