#pragma once
#include "ThreeDimensionalShape.h"
class Tetrahedron :
	public ThreeDimensionalShape
{
private:
	double side;
public:
	virtual double getArea();
	virtual double getVolume();
	void setSide(double=1);
	Tetrahedron(double=1);
	virtual void print();
	~Tetrahedron();
};

