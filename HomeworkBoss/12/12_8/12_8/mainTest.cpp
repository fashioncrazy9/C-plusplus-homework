#include <iostream>
#include "Parallelogram.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"



using namespace std;

int main(){

	cout << "Quadrilateral���O����"<<endl;
	Quadrilateral t1(1,32,35,56);
	cout << '\n';
	cout << "Parallelogra���O����" << endl;
	Parallelogram t2(2, 2, 2, 2);
	cout << '\n';
	cout << "Trapezoid���O����" << endl;
	Trapezoid t3(4, 6, 2, 2);
	cout << '\n';
	cout << "Rectangle���O����" << endl;
	Rectangle t4(2, 2, 2, 2);
	cout << '\n';
	cout << "Square���O����" << endl;
	Square t5(1, 4, 1, 3);

	system("pause");





}