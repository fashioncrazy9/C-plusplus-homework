#pragma once
class Rectangle
{
private:
	float length, width, Perimeter, Area;
public:
	Rectangle();
	~Rectangle();
	//---set
	void setLength(float l);
	void setWidth(float w);
	//----get
	float getLength();
	float getWidth();
	float getArea();
	float getPerimeter();
};

