#pragma once
#include "Quadrilateral.h"

class box
{
private :
	double l, w, h;
	Quadrilateral<double> q[3];
	//
	//2.參考”上禮拜的長方形”
	//撰寫一類別‘長方體’，其擁有三個屬於private的"變數:長、寬、高。以及三個”長方形”型別的成員。
	//繼承之前的”算式”類別做為計算之用。
	//以及以public下功能函式；
	//(a) 基本初始建構子與長寬高修改、讀取函式。
	//(b) 計算此長方體面積(回傳一數字)。
	//(c) 計算此長方體邊總長(回傳一數字)。
	//(d) 計算此長方體體積(回傳一數字)。
	//(e) 在建構子中會依照所給予的長寬高設置三種長方形的長寬。
	//(f) 能夠顯示三種長方型資訊。

public:
	double getLength();
	double getWidth();
	double getHeight();
	box &setLength(double s=1.0);
	box &setWidth(double s=1.0);
	box &setHeight(double s=1.0);
	double getArea();
	double Girth();
	double Volum();
	box&setQuadrilateral();
	void printQuadrilateral();
	box();
	box(double,double,double);
	~box();
};

