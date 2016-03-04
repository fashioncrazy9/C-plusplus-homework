#pragma once
#include "Shape.h"
class TwoDimensionalShape :
	public Shape
{
public:
	virtual double getArea() = 0;
	virtual void print() = 0;
	TwoDimensionalShape();
	~TwoDimensionalShape();
};

