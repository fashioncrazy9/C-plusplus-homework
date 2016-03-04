#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Cube.h"
#include "Tetrahedron.h"
#include <vector>
using namespace std;


int main(){	
	
	//宣告物件
	Circle circle(5);//給半徑5
	Square square(13);//給邊長13
	Triangle triangle(14, 5);//給底14高5
	Sphere sphere(10);//給半徑10
	Cube cube(10);//給邊長10
	Tetrahedron tetrahedron(11);//給邊長11
	//宣告Vector儲存容器
	vector<Shape*> shape(6);
	shape[0] = &circle;
	shape[1] = &square;
	shape[2] = &triangle;
	shape[3] = &sphere;
	shape[4] = &cube;
	shape[5] = &tetrahedron;

	for (int i = 0; i < shape.size(); i++){
		shape[i]->print();
		cout << endl;
	}
	system("pause");
}