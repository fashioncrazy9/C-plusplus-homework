#include <iostream>
#include "Parallelogram.h"
#include "Quadrilateral.h"
#include "Parallelogram.cpp"
#include "Quadrilateral.cpp"
using namespace std;

int main(){
	try{
		double l, w, h;
		cout << "[*]Quadrilateral Test" << endl;
		cout << "Please enter length:";
		cin >> l;
		cout << "Please enter width:";
		cin >> w;
		Quadrilateral<double> *q = new Quadrilateral<double>(l, w);
		cout << "Quadrilateral - Area: " << q->getArea() << " Girth: " << q->getGirth() << endl;
		cout << "\n[Hint]Parallelogram以length當作其底\n" << endl;
		cout << "[*]Parallelogram Test" << endl;
		cout << "Please enter length:";
		cin >> l;
		cout << "Please enter width:";
		cin >> w;
		cout << "Please enter height:";
		cin >> h;
		Parallelogram<double> * p = new Parallelogram<double>(l, w, h);
		cout << "Parallelogram - Area: " << p->getArea() << " Girth: " << p->getGirth() << endl;
		delete q, p;
	}
	catch (exception e){
		cerr << "Error" << endl;
	}

	system("pause");
}