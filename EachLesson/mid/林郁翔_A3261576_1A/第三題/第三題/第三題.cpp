#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	/*3.	(50 points)�мg�XC++�{����� �Ƽơ]complex�^�A�A�����ŧi�@�����O(Complex) �ӥB�n�����ܤ֤T��methods�AaddComplex, mulComplex, and showComplex
	�Ƽ� : a + bi;  a, b�O���(�Ыŧi��double);
	�S�x��(attribute)�����ŧi�� private
	�n�ئܤ֤@�ӫغc�l, Complex(double x, double y)
	addComplex�G�N��ӽƼƬۥ[ Complex addComplex(Complex x, Complex y)
	mulComplex�G�N��ӽƼƬۭ� Complex mulComplex(Complex x, Complex y)
	showComplex: �L�X�@�ӽƼơF(a, bi)
	���էA���{��*/

	
	Complex a(2, 5), b(4, 3), c(5, 7); // �ŧiabc �T�Ӫ��� 
	cout << "�ثe��Ƽ�:" << endl;
	a.showComplex();
	cout << '\n';
	b.showComplex();
	cout << '\n';
	cout << "�п�ܰ����k" << endl;
	cout << "�ۥ[:�п�J0"<<endl;
	cout<<"�ۭ� : ��J0���~����ƼƦr���ۭ�" << endl;
	short boo;
	cin >> boo;
	c = (boo != 0) ? c.mulComplex(a, b) : c.addComplex(a, b);
	c.showComplex();


	system("pause");
}