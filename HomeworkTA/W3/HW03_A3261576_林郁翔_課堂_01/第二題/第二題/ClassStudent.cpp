#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

int main()
{
	string n1, n2;
	int n3;
	Student my;


	cout << "輸入名" << endl;
	cin >> n1;
	my.setFirstName(n1);
	cout << "輸入姓" << endl;
	cin >> n2;
	my.setLastName(n2);

	cout << "輸入分數" << endl;
	cin >> n3;
	my.setGrade(n3);
	my.StudentTest();
	system("pause");



}