#pragma once
#include "TwoDimensionalShape.h"
class Circle :
	public TwoDimensionalShape
{
private:
	double r;//¥b®|
public:
	void setR(double=1);//³]©w¥b®|
	virtual double getArea();
	virtual void print();
	Circle(double=1);
	~Circle();
};

