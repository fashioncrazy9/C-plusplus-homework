#include <iostream>
#include "SimpleFraction.h"
using namespace std;


int main(){


	SimpleFraction a(50,30), b(20,40), c(2,1); //��C��@�e���x��

	c.mulFraction(a, b);
	c.divFraction(a, b);
	c.addFraction(a, b);
	c.subFraction(a, b);

	system("pause");
}