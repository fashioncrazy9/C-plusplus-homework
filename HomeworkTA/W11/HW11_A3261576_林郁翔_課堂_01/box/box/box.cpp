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
	cout << "�����1:" << endl;
	cout << "��" << q[0].getLength() << "�e" << q[0].getWidth() << endl;
	cout << "���n:" << q[0].getArea() << endl;
	cout << "�P��" <<q[0].getGirth()<< endl;
	cout << "�����2:" << endl;
	cout << "��" << q[1].getLength() << "�e" << q[1].getWidth() << endl;
	cout << "���n:" << q[1].getArea() << endl;
	cout << "�P��" << q[1].getGirth() << endl;
	cout << "�����3:" << endl;
	cout << "��" << q[2].getLength() << "�e" << q[2].getWidth() << endl;
	cout << "���n:" << q[2].getArea() << endl;
	cout << "�P��" << q[2].getGirth() << endl;
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