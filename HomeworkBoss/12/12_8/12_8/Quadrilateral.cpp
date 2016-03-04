#include "Quadrilateral.h"
#include <iostream>
using namespace std;

void Quadrilateral::setSideAll(double s1, double s2, double s3, double s4){
	setSide1(s1).setSide2(s2).setSide3(s3).setSide4(s4);

}
Quadrilateral &Quadrilateral::showAllSide(){

	cout << "[*]目前邊長:side1:" << getSide1() << " side2:" << getSide2() << " side3:" << getSide3() << " side4:" << getSide4()<< endl;
	return *this;
}
Quadrilateral::Quadrilateral(double s1, double s2, double s3, double s4)
{
	setSideAll(s1, s2, s3, s4);
	cout << "[*]四邊形設定成功" << endl;
	Quadrilateral::showAllSide();
}
Quadrilateral::Quadrilateral()
{
	setSideAll();
}
Quadrilateral::~Quadrilateral()
{
}

Quadrilateral &Quadrilateral::setSide1(double s){
	side1 = s;
	return *this;
}
Quadrilateral &Quadrilateral::setSide2(double s){
	side2 = s;
	return *this;
}
Quadrilateral &Quadrilateral::setSide3(double s){
	side3 = s;
	return *this;
}
Quadrilateral  &Quadrilateral::setSide4(double s){
	side4 = s;
	return *this;
}
double Quadrilateral::getSide1(){
	return side1;
}
double Quadrilateral::getSide2(){
	return side2;
}
double Quadrilateral::getSide3(){
	return side3;
}
double Quadrilateral::getSide4(){
	return side4;
}