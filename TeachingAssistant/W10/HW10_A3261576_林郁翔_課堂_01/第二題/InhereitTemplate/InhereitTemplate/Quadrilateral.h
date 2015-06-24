#pragma once

template<typename T>
class Quadrilateral
{
private:

	/*(a)基本初始建構子與長寬修改、讀取函式。
	(b)計算此長方形面積(回傳一數字)。
	(c)計算此長方形周長(回傳一數字)。*/
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

