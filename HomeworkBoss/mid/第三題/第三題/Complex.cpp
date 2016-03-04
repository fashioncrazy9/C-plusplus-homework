#include "Complex.h"
#include <iostream>
using namespace std;


Complex::Complex(double x, double y)
{
	setnumR(x).setnumZ(y);
}


Complex::~Complex()
{
}

Complex &Complex::setnumR(double r){

	numR =r;
	return *this;
}
Complex &Complex::setnumZ(double z){
	numZ = z;
	return *this;
}
Complex Complex::addComplex(Complex x, Complex y){

	double TempNumR = x.getnumR() + y.getnumR();
	double TempNumZ = x.getnumZ() + y.getnumZ();
	Complex ComplexTemp(TempNumR, TempNumZ);
	return ComplexTemp;
}
Complex Complex::mulComplex(Complex x, Complex y){

	
	double TempNumR = x.getnumR() + y.getnumR() - x.getnumZ()*y.getnumZ();
	double TempNumZ = x.getnumZ()*y.getnumR() + x.getnumR()*y.getnumZ();
	Complex ComplexTemp(TempNumR, TempNumZ);
	return ComplexTemp;

}
void Complex::showComplex(){
	//印出一個複數；(a, bi)

	cout << "(" << numR << "," << numZ << "i)";

}

double Complex::getnumR(){

	return numR;
}
double  Complex::getnumZ(){

	return numZ;
}