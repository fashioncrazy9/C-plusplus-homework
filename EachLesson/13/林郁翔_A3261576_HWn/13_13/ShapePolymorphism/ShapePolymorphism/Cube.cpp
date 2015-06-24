#include "Cube.h"
#include <iostream>
using namespace std;

Cube::Cube(double h,double l ,double w)
{
	setHeight(h);
	setLength(l);
	setWidth(w);
}


Cube::~Cube()
{
}

void Cube::print(){
	cout << "Cube:" << endl;
	cout << "Area:" << getArea() << endl;
	cout << "Volume:" << getVolume() << endl;
}
void Cube::setLength(double s){
	length = s;
}
void Cube::setHeight(double s){
	height = s;
}
double Cube::getArea(){
	return 2 * (getLength()*getWidth() + getWidth()*getHeight() + getLength()*getHeight());
}
double Cube::getVolume(){
	return getLength()*getWidth()*getHeight();
}
void Cube::setWidth(double s){
	width = s;
}
double  Cube::getLength(){
	return length;
}
double  Cube::getHeight(){
	return height;
}
double  Cube::getWidth(){
	return width;
}
