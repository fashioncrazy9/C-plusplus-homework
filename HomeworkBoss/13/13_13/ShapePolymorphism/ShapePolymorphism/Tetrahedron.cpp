#include "Tetrahedron.h"
#include <math.h>
#include <iostream>
using namespace std;
Tetrahedron::Tetrahedron(double s)
{
	setSide(s);
}


Tetrahedron::~Tetrahedron()
{
}
double Tetrahedron::getArea(){
	return  sqrt(3.0)*pow(side, 2);
}
double Tetrahedron::getVolume(){	
	return sqrt(2.0)*pow(side,3)*(1.0/12);

}
void  Tetrahedron::setSide(double s){
	side = s;
}

void Tetrahedron::print(){
	cout << "Tetrahedron:" << endl;
	cout << "Area:" << getArea() << endl;
	cout << "Volume:" << getVolume() << endl;
}
