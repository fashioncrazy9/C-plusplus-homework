#pragma once
#include "Quadrilateral.h"
class Trapezoid :
	public Quadrilateral
{
public:
	void setTrapezoidAllSide(double = 1, double = 1, double = 1, double = 1);
	Trapezoid();
	Trapezoid(double s1, double s2, double s3, double s4);
	~Trapezoid();
};

