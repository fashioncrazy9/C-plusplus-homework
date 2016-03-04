#include "Rectangle.h"


Rectangle::Rectangle()
{
	length = width = 1;
}


Rectangle::~Rectangle()
{
}
void Rectangle::setLength(float l){
	if (l >= 0.0 && l<= 20.0)
	{
		length = l;
	}
}
void Rectangle::setWidth(float w){
	if (w >= 0.0 && w <= 20.0)
	{
		width= w;
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

