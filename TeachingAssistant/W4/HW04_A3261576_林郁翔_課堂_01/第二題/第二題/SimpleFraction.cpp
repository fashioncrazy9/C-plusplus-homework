#include "SimpleFraction.h"
#include <iostream>
using namespace std;
SimpleFraction::SimpleFraction(int m, int d){
	if (d!=0)
	{ 
	//初始化
	denominator = d; //分母
	molecular =m ; //分子
	}
	else
	{
		cout << "分母不可為0";
	}
}
SimpleFraction::~SimpleFraction(){



}
void SimpleFraction::printSimpleFraction(){

	int gcdNum = gcd(denominator, molecular);
	cout << "Ans:" << molecular / gcdNum << "/" << denominator / gcdNum << endl;

}
void SimpleFraction::addFraction(SimpleFraction A, SimpleFraction B){
	cout << "相加:" << endl;
	denominator = A.denominator*B.denominator;
	int A_M = A.molecular*B.denominator;
	int B_M = B.molecular*A.denominator;
	//回傳相減分子
	molecular = A_M + B_M;
	//印出
	printSimpleFraction();
}
void SimpleFraction::subFraction(SimpleFraction A, SimpleFraction B){
	cout << "相減:" << endl;
	denominator = A.denominator*B.denominator;
	int A_M = A.molecular*B.denominator;
	int B_M = B.molecular*A.denominator;
	//回傳相減分子
	molecular = A_M - B_M;
	//印出
	printSimpleFraction();
}
void SimpleFraction::mulFraction(SimpleFraction A, SimpleFraction B){
	cout << "相乘:" << endl;
	int m = A.molecular*B.molecular;
	int d = A.denominator*B.denominator;

	molecular = m;
	denominator = d;
	//印出答案
	printSimpleFraction();
}
void SimpleFraction::divFraction(SimpleFraction A, SimpleFraction B){
	cout << "相除:" << endl;
	molecular = A.molecular*B.denominator;
	denominator = A.denominator*B.molecular;
	//印出答案
	printSimpleFraction();

}
int SimpleFraction::gcd(int a, int b){

	if (a == b) // 因為一直除到最後相減為0的前一個值即為回傳值，所以找前面那一個，雖然會多做幾次
	{
		return a;
	}

	if(a > b)
	{
		return gcd(a-b,b);
	}
	else
	{
		return gcd(a, b-a);
	}


}
