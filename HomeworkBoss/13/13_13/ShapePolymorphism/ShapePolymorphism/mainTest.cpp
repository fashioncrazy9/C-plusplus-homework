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
	
	//�ŧi����
	Circle circle(5);//���b�|5
	Square square(13);//�����13
	Triangle triangle(14, 5);//����14��5
	Sphere sphere(10);//���b�|10
	Cube cube(10);//�����10
	Tetrahedron tetrahedron(11);//�����11
	//�ŧiVector�x�s�e��
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