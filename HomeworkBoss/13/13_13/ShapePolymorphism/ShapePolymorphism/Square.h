#pragma once
#include "TwoDimensionalShape.h"
class Square :
	public TwoDimensionalShape
{
private:
	double side;
public:
	void setSide(double=1);
	virtual double getArea();
	Square(double=1);
	virtual void print();
	~Square();
};

