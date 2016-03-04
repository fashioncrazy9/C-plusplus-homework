#include "SavingsAccount.h"
#include <iostream>
using namespace std;

//初始化
double SavingsAccount::annualInterestRate=0;

SavingsAccount::SavingsAccount()
{

}
SavingsAccount::SavingsAccount(double e)
{
	SavingsAccount::annualInterestRate = 0.03;
	setBalance(e);//初始化
}

SavingsAccount::~SavingsAccount()
{
}
double SavingsAccount::getSavingBalance(){
	return savingBalance;
}
void SavingsAccount::printfSavingBalance(){
	cout << "新餘額:$" << savingBalance<<endl;
}
void  SavingsAccount::setBalance(double e){
	savingBalance = e;
}
void SavingsAccount::calculateMounthlyInterest(){
	//計算每月存款利息
	savingBalance = (savingBalance*annualInterestRate) / 12.0 + savingBalance;
}
void SavingsAccount::modifyInterestRate(double rate){
	//設定static annualInterestRate的新值
	annualInterestRate = rate;
}

void getAnnualInterestRate(){


}

