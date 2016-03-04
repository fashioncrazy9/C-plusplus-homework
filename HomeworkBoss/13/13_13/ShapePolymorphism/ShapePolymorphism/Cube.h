#pragma once
#include "ThreeDimensionalShape.h"
class Cube :
	public ThreeDimensionalShape
{

private:
	double length;
	double height;
	double width;
public:
	virtual void print();
	void setLength(double=1);
	void setHeight(double=1);
	void setWidth(double = 1);
	double getLength();
	double getHeight();
	double getWidth();
	virtual double getArea();
	virtual double getVolume();
	Cube(double=1,double=1,double=1);
	~Cube();
};

