#pragma once
class Quadrilateral
{
private:
	double  side1, side2, side3, side4;//四個邊
public:
	void setSideAll(double = 1, double = 1, double = 1, double = 1);//未輸初始1
	Quadrilateral &showAllSide();
	Quadrilateral &setSide1(double s);
	Quadrilateral &setSide2(double s);
	Quadrilateral &setSide3(double s);
	Quadrilateral &setSide4(double s);
	double getSide1();
	double getSide2();
	double getSide3();
	double getSide4();
	Quadrilateral();
	Quadrilateral(double s1, double s2, double s3, double s4);
	
	~Quadrilateral();
};

