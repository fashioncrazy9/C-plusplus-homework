#pragma once
class Complex
{
private:
	double numR, numZ; //numR���ƼȦs��,numZ���ƼȦs��
public:
	Complex(double x, double y);
	Complex();
	~Complex();
	Complex &setnumR(double r);
	Complex &setnumZ(double z);
	double getnumR();
	double getnumZ();
	Complex addComplex(Complex x, Complex y);
	Complex mulComplex(Complex x, Complex y);
	void showComplex();
};

