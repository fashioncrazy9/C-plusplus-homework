#pragma once
class Complex
{
private:
	double numR, numZ; //numR表實數暫存值,numZ表虛數暫存值
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

