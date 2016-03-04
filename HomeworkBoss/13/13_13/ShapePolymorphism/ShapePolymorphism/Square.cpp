#include "Square.h"

#include <iostream>
using namespace std;
Square::Square(double s)
{
	setSide(s);
}

void Square::print(){
	cout << "Square:" << endl;
	cout << "Area:" << getArea() << endl;
}
void Square::setSide(double s)
{
	side = s;
}
Square::~Square()
{
}
double Square::getArea(){
	return side*side;
}