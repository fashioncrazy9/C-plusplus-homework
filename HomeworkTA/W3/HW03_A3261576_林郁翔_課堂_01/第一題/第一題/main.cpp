#include <iostream>
#include "HeaderClass.h"
using namespace std;

int main()
{
	HeaderClass m;
	int n1;
	double n2;
	cout << "first number" << endl;
	cin >> n1;
	cout << "second number" << endl;
	cin >> n2;
	
	m.setprivateInt(n1);
	m.setprivateDouble(n2);
	m.getvalue();
	
	system("pause");

}