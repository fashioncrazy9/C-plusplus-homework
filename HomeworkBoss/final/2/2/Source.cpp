#include <iostream>
#include "Place.h"
#include "Place3D.h"
#include <vector>
using namespace std;

int main(){
	cout << "[#]�إ�p1 �п�J�g�n��" << endl;
	cout << "�榡(�����ʦ�и�0�B�n�[���t��)  ex:  (+063,-32) " << endl;
	Place p1;
	cin >> p1;
	cout << "[#]�w�]�����إߤ@��Place3D���O��m�Ȭ�(32,10,12) " << endl;
	Place3D p2(32, 10, 12);

	cout << "�Hvector�覡�x�s�æL�X" << endl;
	vector <Place*> place(2);
	place[0] = &p1;
	place[1] = &p2;

	for (size_t i = 0; i < place.size(); i++){
		place[i]->showplace(*place[i]);
	}
	cout << "�L�Xvector place[0]+place[1] �Y���V�᪺�ۥ[" << endl;
	cout << (place[0]->addPlace(*place[0], *place[1])) << endl;
	Place output;
	Place p3(15, 20);
	cout << "�Ĥ@��palce���O�Pplace(15,20)�P�_�O�_�۵�" << endl;
	cout << ((p1 == p3) ? "�۵�\n": "���۵�\n");
	cout << "�Ĥ@��palce���O�[�Wplace(15,20)�ۥ[" << endl;
	output = p1 + p3;
	cout << output;
	

	system("pause");
}