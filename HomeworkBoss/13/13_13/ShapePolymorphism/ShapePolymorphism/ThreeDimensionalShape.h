#pragma once
#include "Shape.h"
class ThreeDimensionalShape :
	public Shape
{
public:
	virtual double getArea() = 0;
	virtual double getVolume() = 0;
	virtual void print() = 0;
	ThreeDimensionalShape();
	~ThreeDimensionalShape();
};

