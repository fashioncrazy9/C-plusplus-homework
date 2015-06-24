#include "Circle.h"
#include <iostream>
using namespace std;
void Circle::setR(double s){
	r = s;
}
Circle::Circle(double r)
{
	setR(r);
}
void Circle::print(){
	cout << "Circle:"<< endl;
	cout <<"Area:" << getArea()<<endl;
}
double Circle::getArea(){
	return r*r*3.14;
}
Circle::~Circle()
{
}
