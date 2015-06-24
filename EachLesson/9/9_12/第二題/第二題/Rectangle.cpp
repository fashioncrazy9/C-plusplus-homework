#include "Rectangle.h"
#include <math.h>

Rectangle::Rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	length = width = 1;

	setPoint(x1, y1, x2, y2, x3, y3, x4, y4);

}


Rectangle::~Rectangle()
{
}
void Rectangle::setLength(){
	if (distance(a, b) >= distance(b, c))
	{
		length = sqrt(distance(a, b));
	}
	else
	{
		
		width = sqrt(distance(a, b));
	}
}
void Rectangle::setWidth(){
	if (distance(a, b) >= distance(b, c))
	{
		width = distance(b, c);
	}
	else
	{
		length = distance(b, c);
	}
}
float Rectangle::getLength(){



	return length;
}
float Rectangle::getWidth(){
	return width;
}
float Rectangle::getArea(){
	Area = length*width;
	return Area;
}
float Rectangle::getPerimeter(){
	Perimeter = (length + width) * 2;
	return Perimeter;
}
void Rectangle::setPoint(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4){

	a.setPointInitalize(x1,y1);
	b.setPointInitalize(x2, y2);
	c.setPointInitalize(x3, y3);
	d.setPointInitalize(x4, y4);
	setLength();
	setWidth();
	RectangleBool = false;
	//A
	if (RectangleBool == false)
	setRectangle(a, b, c, d);
	if (RectangleBool == false)
	setRectangle(a, b, d, c);
	if (RectangleBool == false)
	setRectangle(a, c, b, d);
	if (RectangleBool == false)
	setRectangle(a, c, d, b);
	if (RectangleBool == false)
	setRectangle(a, d, c, b);
	if (RectangleBool == false)
	setRectangle(a, d, b, c);

	//B
	if (RectangleBool == false)
	setRectangle(b, a, c, d);
	if (RectangleBool == false)
	setRectangle(b, a, d, c);
	if (RectangleBool == false)
	setRectangle(b, c, a, d);
	if (RectangleBool == false)
	setRectangle(b, c, d, a);
	if (RectangleBool == false)
	setRectangle(b, d, a, c);
	if (RectangleBool == false)
	setRectangle(b, d, c, a);
	//C
	if (RectangleBool == false)
	setRectangle(c, a, b, d);
	if (RectangleBool == false)
	setRectangle(c, a, d, b);
	if (RectangleBool == false)
	setRectangle(c, b, a, d);
	if (RectangleBool == false)
	setRectangle(c, b, d, a);
	if (RectangleBool == false)
	setRectangle(c, d, a, b);
	if (RectangleBool == false)
	setRectangle(c, d, b, a);
	//D
	if (RectangleBool == false)
	setRectangle(d, a, b,c);
	if (RectangleBool == false)
	setRectangle(d, a, c, b);
	if (RectangleBool == false)
	setRectangle(d, b, a, c);
	if (RectangleBool == false)
	setRectangle(d, b, c, a);
	if (RectangleBool == false)
	setRectangle(d, c, a, b);
	if (RectangleBool == false)
	setRectangle(d, c, b, a);

	setSquare();

}

void Rectangle::setRectangle(Point a ,Point b ,Point c,Point d){
	RectangleBool = false;
	if ((distance(a, b) == distance(d, c)) && (distance(a, d) == distance(b, c)))
	{
		RectangleBool = true;
	}
	else
	{
		
		RectangleBool = false;
	}
	if ((a.x == b.x&&a.y == b.y) || (a.x == c.x&&a.y == c.y) || (a.x == d.x&&a.y == d.y))
	{
		RectangleBool = false;
	}
	else
	{
		RectangleBool = true;
	}
	if ((b.x == a.x&&b.y == a.y) || (b.x == c.x&&b.y == c.y) || (b.x == d.x&&b.y == d.y))
	{
		RectangleBool = false;
	}
	else
	{
		RectangleBool = true;
	}
	if ((c.x == a.x&&c.y == a.y) || (c.x == b.x&&c.y == b.y) || (c.x == d.x&&c.y == d.y))
	{
		RectangleBool = false;
	}
	else
	{
		RectangleBool = true;
	}
	if ((d.x == a.x&&d.y == a.y) || (d.x == b.x&&d.y == b.y) || (d.x == c.x&&d.y == c.y))
	{
		RectangleBool = false;
	}
	else
	{
		RectangleBool = true;
	}
	if ((a.x - b.x)*(b.x - c.x) + (a.y - b.y)*(b.y - c.y) == 0 && (a.x - d.x)*(d.x - c.x) + (a.y - d.y)*(d.y - c.y) == 0)
	{

		RectangleBool = true;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	else
	{
		RectangleBool = false;
	}

}

bool Rectangle::getRectangleBool(){

	return RectangleBool;
}

float Rectangle::distance(Point q ,Point p){
	//此距離尚未開根號
	float d = (p.x - q.x)*(p.x - q.x) + (p.y - q.y)*(p.y - q.y);
	return d;
	
}
void  Rectangle::setSquare(){
	SquareBool = false;
	if (RectangleBool == true)
	{
		if ((distance(a, b) == distance(b, c)))
		{
			SquareBool =true;
		}

	}
}
bool Rectangle::getSquareBool(){
	return SquareBool;
}