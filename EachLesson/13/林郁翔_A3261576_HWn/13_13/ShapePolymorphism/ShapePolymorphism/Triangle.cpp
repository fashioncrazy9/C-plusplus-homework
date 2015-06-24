#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(double f,double h)
{
	setFloor(f);
	setHeight(h);
}

Triangle::~Triangle()
{
}
void Triangle::setFloor(double s){
	floor = s;
}
void Triangle::setHeight(double s){
	height = s;
}
double Triangle::getArea(){
	return floor*height / 2;
}
void Triangle::print(){
	cout << "Triangle:" << endl;
	cout << "Area:" << getArea() << endl;
}