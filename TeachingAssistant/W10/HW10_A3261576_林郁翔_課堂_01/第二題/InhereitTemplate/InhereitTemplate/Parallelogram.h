#pragma once
#include "Quadrilateral.h"

//§â©³·íªø
template<typename T>
class Parallelogram :public Quadrilateral<T>
{
private:
	T height;
public:
	Parallelogram &setHeight(T h);
	T &getHeight();
	virtual T getArea();
	Parallelogram(T l, T w, T h);
	~Parallelogram();
	void setParallelogram(T = 1, T = 1, T = 1);
};

