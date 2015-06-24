#pragma once
#include "ThreeDimensionalShape.h"
class Sphere :
	public ThreeDimensionalShape
{
private:
	double r;
public:
	void setR(double =1);
	double getR();
	virtual double getArea();
	virtual double getVolume();
	Sphere(double=1);
	virtual void print();
	~Sphere();
};

