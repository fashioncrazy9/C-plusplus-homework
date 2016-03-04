#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	/*3.	(50 points)請寫出C++程式表示 複數（complex），你必須宣告一個類別(Complex) 而且要完成至少三個methods，addComplex, mulComplex, and showComplex
	複數 : a + bi;  a, b是實數(請宣告為double);
	特徵值(attribute)必須宣告為 private
	要建至少一個建構子, Complex(double x, double y)
	addComplex：將兩個複數相加 Complex addComplex(Complex x, Complex y)
	mulComplex：將兩個複數相乘 Complex mulComplex(Complex x, Complex y)
	showComplex: 印出一個複數；(a, bi)
	測試你的程式*/

	
	Complex a(2, 5), b(4, 3), c(5, 7); // 宣告abc 三個物件 
	cout << "目前兩複數:" << endl;
	a.showComplex();
	cout << '\n';
	b.showComplex();
	cout << '\n';
	cout << "請選擇執行方法" << endl;
	cout << "相加:請輸入0"<<endl;
	cout<<"相乘 : 輸入0之外的整數數字為相乘" << endl;
	short boo;
	cin >> boo;
	c = (boo != 0) ? c.mulComplex(a, b) : c.addComplex(a, b);
	c.showComplex();


	system("pause");
}