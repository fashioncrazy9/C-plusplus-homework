#pragma once
#include "Quadrilateral.h"
class Parallelogram :
	public Quadrilateral
{
public:
	void setParallelogramAllSide(double = 1, double = 1, double = 1, double = 1);
	Parallelogram();
	~Parallelogram();
	Parallelogram(double s1, double s2, double s3, double s4);
};

