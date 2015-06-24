#pragma once
#include"Point.h"
class Rectangle
{
private:
	float length, width, Perimeter, Area;
	bool RectangleBool, SquareBool;
	Point a, b, c, d;
	float distance(Point a, Point b);
	void setRectangle(Point a, Point b, Point c, Point d);
	void setSquare();
	//--set
	void setLength();
	void setWidth();
public:
	Rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
	~Rectangle();
	//---set
	//設定座標點
	void setPoint(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
	//----get
	float getLength();
	float getWidth();
	float getArea();
	float getPerimeter();
	bool getRectangleBool();
	bool getSquareBool();
};


