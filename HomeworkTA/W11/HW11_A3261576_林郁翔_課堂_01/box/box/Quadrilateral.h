#pragma once

template<typename T>
class Quadrilateral
{
private:

	/*(a)�򥻪�l�غc�l�P���e�ק�BŪ���禡�C
	(b)�p�⦹����έ��n(�^�Ǥ@�Ʀr)�C
	(c)�p�⦹����ΩP��(�^�Ǥ@�Ʀr)�C*/
	T width, length;

public:
	Quadrilateral &setWidth(T = 0);
	Quadrilateral &setLength(T = 0);
	T getWidth();
	T getLength();
	virtual T getArea();
	virtual T getGirth();
	Quadrilateral(T = 1, T = 1);
};

