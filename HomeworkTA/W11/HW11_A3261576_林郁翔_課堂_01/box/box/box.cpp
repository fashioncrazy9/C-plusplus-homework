#include "box.h"
#include <iostream>
#include "Quadrilateral.cpp"
using namespace std;

box::box()
{
	setLength().setWidth().setHeight();
}
box::box(double d1,double d2,double d3)
{
	setLength(d1).setWidth(d2).setHeight(d3);
}

box::~box()
{
}
void box::printQuadrilateral(){
	cout << "長方形1:" << endl;
	cout << "長" << q[0].getLength() << "寬" << q[0].getWidth() << endl;
	cout << "面積:" << q[0].getArea() << endl;
	cout << "周長" <<q[0].getGirth()<< endl;
	cout << "長方形2:" << endl;
	cout << "長" << q[1].getLength() << "寬" << q[1].getWidth() << endl;
	cout << "面積:" << q[1].getArea() << endl;
	cout << "周長" << q[1].getGirth() << endl;
	cout << "長方形3:" << endl;
	cout << "長" << q[2].getLength() << "寬" << q[2].getWidth() << endl;
	cout << "面積:" << q[2].getArea() << endl;
	cout << "周長" << q[2].getGirth() << endl;
}
box &box::setQuadrilateral(){
	q[0] = Quadrilateral<double>(getHeight(),getLength());
	q[1] = Quadrilateral<double>(getHeight(),getWidth());
	q[2] = Quadrilateral<double>(getWidth(), getLength());
	return *this;
}
double box::getArea(){
	return (getLength()*getWidth() + getWidth()*getHeight() + getHeight()*getLength());
}
double box::Girth(){
	return (getLength() + getWidth() + getWidth()) * 4.0;
}
double box::Volum(){
	return(getLength() * getWidth() * getWidth());
}
double box::getLength(){
	return l;
}
double box::getWidth(){
	return w;
}
double box::getHeight(){
	return h;
}
box &box::setLength(double s){
	l = s;
	return *this;
}
box &box::setWidth(double s){
	w = s;
	return *this;
}

box &box::setHeight(double s){
	h = s;
	return *this;
}