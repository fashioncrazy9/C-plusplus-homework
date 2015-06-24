#pragma once
#include"Point.h"
class Rectangle
{
private:
	float length, width, Perimeter, Area;
	bool RectangleBool, SquareBool;

	char panel[25][25], Fillcharacter, PerimeterCharacter;
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

	void draw();
	void setFillcharacter(char c);
	void setPerimeterCharacter(char c);
	void linePoint(Point p1, Point p2);
	void fill();
};


