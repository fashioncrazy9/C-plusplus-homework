#include <iostream>
#include "SavingsAccount.h"
using namespace std;
int main()
{
	SavingsAccount *save1,*save2;
	save1 = new SavingsAccount(2000.00);
	save2 = new SavingsAccount(3000.00);
	
	SavingsAccount::modifyInterestRate(0.03);
	cout << "save1�l�B:$" << save1->getSavingBalance() << endl;
	cout << "save2�l�B:$" << save2->getSavingBalance() << endl;
	cout << '\n';
	save1->calculateMounthlyInterest();
	save2->calculateMounthlyInterest();
	cout << "�Ĥ@�Ӥ�" << endl;
	cout << "save1:\n";
	save1->printfSavingBalance();
	cout << "save2:\n";
	save2->printfSavingBalance();
	cout << '\n';
	cout << "�ĤG�Ӥ�" << endl;
	SavingsAccount::modifyInterestRate(0.04);
	save1->calculateMounthlyInterest();
	save2->calculateMounthlyInterest();
	cout << "save1:\n";
	save1->printfSavingBalance();
	cout << "save2:\n";
	save2->printfSavingBalance();

	delete save1, save2;

	system("pause");
}