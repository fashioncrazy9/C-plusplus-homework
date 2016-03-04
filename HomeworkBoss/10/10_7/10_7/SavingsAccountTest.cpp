#include <iostream>
#include "SavingsAccount.h"
using namespace std;
int main()
{
	SavingsAccount *save1,*save2;
	save1 = new SavingsAccount(2000.00);
	save2 = new SavingsAccount(3000.00);
	
	SavingsAccount::modifyInterestRate(0.03);
	cout << "save1餘額:$" << save1->getSavingBalance() << endl;
	cout << "save2餘額:$" << save2->getSavingBalance() << endl;
	cout << '\n';
	save1->calculateMounthlyInterest();
	save2->calculateMounthlyInterest();
	cout << "第一個月" << endl;
	cout << "save1:\n";
	save1->printfSavingBalance();
	cout << "save2:\n";
	save2->printfSavingBalance();
	cout << '\n';
	cout << "第二個月" << endl;
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