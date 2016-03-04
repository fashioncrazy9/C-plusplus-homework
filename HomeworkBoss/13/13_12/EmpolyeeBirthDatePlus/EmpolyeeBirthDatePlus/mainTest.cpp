#include <iostream>
#include "Employee.h"
#include "SalariedEmployee.h" 
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"  
#include "BasePlusCommissionEmployee.h" 
#include <vector>

using namespace std;

int main(){

	//�إߪ���
	SalariedEmployee salariedEmployee(
		"John", "Smith", "111-11-1111", 800);
	HourlyEmployee hourlyEmployee(
		"Karen", "Price", "222-22-2222", 16.75, 40);
	CommissionEmployee commissionEmployee(
		"Sue", "Jones", "333-33-3333", 10000, .06);
	BasePlusCommissionEmployee basePlusCommissionEmployee(
		"Bob", "Lewis", "444-44-4444", 5000, .04, 300);
	//�]�w�ͤ��ݩ�
	salariedEmployee.setbirthDate(1,1,1995);
	hourlyEmployee.setbirthDate(5, 23, 1993);
	commissionEmployee.setbirthDate(9, 9, 1997);
	basePlusCommissionEmployee.setbirthDate(6, 15, 1995);
	vector<Employee*> enumeratorEmployee(4);
	enumeratorEmployee[0] = &salariedEmployee;
	enumeratorEmployee[1] = &hourlyEmployee;
	enumeratorEmployee[2] = &commissionEmployee;
	enumeratorEmployee[3] = &basePlusCommissionEmployee;
	//���L�X���[�~�e���u�~��
	cout << "[*]�[�~�e" << endl;
	for (size_t i = 0; i < enumeratorEmployee.size(); i++){
		enumeratorEmployee[i]->print();
		cout << "\nearned$" << enumeratorEmployee[i]->earnings()<<endl;
	}
	//���]���ѬO2015/05/25��󦹤몺���u�[�~100��
	
	Date today(5, 25, 2015);
	cout << "[*]�[�~��: (Today: "<<today<<")"<<endl;
	//�ŧivector���X�C�ӭ��u
	for (size_t i = 0; i < enumeratorEmployee.size(); i++){
		if (enumeratorEmployee[i]->getMonth() == today.getMouth()){
			enumeratorEmployee[i]->AddEarning(100);
		}
		enumeratorEmployee[i]->print();
		cout << "\nearned$" << enumeratorEmployee[i]->earnings() << endl;
	}


	system("pause");
	return 0;
}