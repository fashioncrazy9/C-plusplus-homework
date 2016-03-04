#include "Sphere.h"
#include <iostream>
using namespace std;

Sphere::Sphere(double r)
{
	setR(r);
}


Sphere::~Sphere()
{
}
void Sphere::print(){
	cout << "Sphere:" << endl;
	cout << "Area:" << getArea() << endl;
	cout << "Volume:" << getVolume() << endl;
}

void Sphere::setR(double s){
	r = s;
}
double Sphere::getArea(){
	return 4 * r*r*3.14;
}
double Sphere::getVolume(){

	return r*r*r*3.14 * (4 / 3);
}