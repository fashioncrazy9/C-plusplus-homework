#pragma once
#include "TwoDimensionalShape.h"
class Triangle :
	public TwoDimensionalShape
{
private:
	double floor;
	double height;
public:
	void setFloor(double=1);
	void setHeight(double=1);
	Triangle(double=1,double=1);
	virtual double getArea();
	virtual void print();
	~Triangle();
};

