#include "SimpleFraction.h"
#include <iostream>
using namespace std;
SimpleFraction::SimpleFraction(int m, int d){
	if (d!=0)
	{ 
	//��l��
	denominator = d; //����
	molecular =m ; //���l
	}
	else
	{
		cout << "�������i��0";
	}
}
SimpleFraction::~SimpleFraction(){



}
void SimpleFraction::printSimpleFraction(){

	int gcdNum = gcd(denominator, molecular);
	cout << "Ans:" << molecular / gcdNum << "/" << denominator / gcdNum << endl;

}
void SimpleFraction::addFraction(SimpleFraction A, SimpleFraction B){
	cout << "�ۥ[:" << endl;
	denominator = A.denominator*B.denominator;
	int A_M = A.molecular*B.denominator;
	int B_M = B.molecular*A.denominator;
	//�^�Ǭ۴���l
	molecular = A_M + B_M;
	//�L�X
	printSimpleFraction();
}
void SimpleFraction::subFraction(SimpleFraction A, SimpleFraction B){
	cout << "�۴�:" << endl;
	denominator = A.denominator*B.denominator;
	int A_M = A.molecular*B.denominator;
	int B_M = B.molecular*A.denominator;
	//�^�Ǭ۴���l
	molecular = A_M - B_M;
	//�L�X
	printSimpleFraction();
}
void SimpleFraction::mulFraction(SimpleFraction A, SimpleFraction B){
	cout << "�ۭ�:" << endl;
	int m = A.molecular*B.molecular;
	int d = A.denominator*B.denominator;

	molecular = m;
	denominator = d;
	//�L�X����
	printSimpleFraction();
}
void SimpleFraction::divFraction(SimpleFraction A, SimpleFraction B){
	cout << "�۰�:" << endl;
	molecular = A.molecular*B.denominator;
	denominator = A.denominator*B.molecular;
	//�L�X����
	printSimpleFraction();

}
int SimpleFraction::gcd(int a, int b){

	if (a == b) // �]���@������̫�۴0���e�@�ӭȧY���^�ǭȡA�ҥH��e�����@�ӡA���M�|�h���X��
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
