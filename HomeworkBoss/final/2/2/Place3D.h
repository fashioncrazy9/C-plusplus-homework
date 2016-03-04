#pragma once
#include "Place.h"
class Place3D :
	public Place
{
private:
	double height;
public:
	void setHeight(double=0);
	double getHeight();
	Place3D(double = 0, double = 0, double = 0);
	~Place3D();
	virtual  Place addPlace(Place3D x, Place3D y);
	virtual void showplace(Place x);
};

